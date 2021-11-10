#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	cin >> a;
	int f = 0,s = 0;
	int first = 0,second = 0;
	int ans = 10;
	for(int i = 0;i < 10;i++){
		if(i%2==0){
			if(a[i] == '1'){
				f++;
			}else if(a[i] == '?'){
				first++;
			}
		}else{
			if(a[i] == '1'){
				s++;
			}else if(a[i] == '?'){
				second++;
			}
		}
		
		if(f+first-s-((9-i+1)/2) > 0){
			ans = min(ans,i+1);
		}else if(s+second-f-((9-i)/2) > 0){
			ans = min(ans,i+1);
		}
		
	}
	
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
