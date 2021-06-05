#include <bits/stdc++.h>
using namespace std;

int ans[1010];

void solve(){
	memset(ans,0,sizeof(ans));
	int n,m;
	cin >> n >> m;
	string temp;
	cin >> temp;
	for(int i = 0;i < n;i++){
		if(temp[i] == '1'){
			ans[max(i-m,0)]++;
			ans[min(i+m+1,n)]--;
		}
	}
	string answer = "";
	int curr = 0;
	for(int i = 0;i < n;i++){
		curr += ans[i];
		if(curr > 0){
			answer += "1";
		}else{
			answer += "0";
		}
	}
	
	curr = -1;
	int prev = -1;
	for(int i = 0;i < n;i++){
		if(temp[i] == '1'){
			prev = curr;
			curr = i;
			if(curr >= 0 && prev >= 0 && (curr-prev)%2 == 0){
				answer[(curr-prev)/2+prev] = '0';
			}
		}
	}
	cout << answer << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
