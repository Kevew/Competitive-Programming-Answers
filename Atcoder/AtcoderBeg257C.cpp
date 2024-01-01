#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<pair<int,char>> arr;
	int curr = 0;
	for(int i = 0;i < n;i++){
		int a;
		cin >> a;
		arr.push_back({a,s[i]});
		if(s[i] == '1'){
			curr++;
		}
	}
	sort(arr.begin(),arr.end());
	int ans = curr;
	for(int i = 0;i < n;i++){
		if(arr[i].second == '1'){
			curr--;
		}else{
			curr++;
		}
		if(i < (n-1)){
			if(arr[i].first != arr[i+1].first){
				ans = max(ans,curr);
			}
		}else{
			ans = max(ans,curr);
		}
	}
	cout << ans << endl;
}
