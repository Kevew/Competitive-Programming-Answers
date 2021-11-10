#include <bits/stdc++.h>
using namespace std;

vector<int> arr[30];

int main(){
	int n,k;
	string s;
	cin >> n >> k >> s;
	for(int i = 0;i < k;i++){
		arr[s[i]-'a'].push_back(i);
	}
	for(int i = 0;i < n;i++){
		cin >> s;
		long long ans = 0;
		int ssize = s.size();
		for(int j = 0;j < ssize;j++){
			if(arr[s[j]-'a'].empty()){
				ans += ssize;
			}else{
				auto u = lower_bound(arr[s[j]-'a'].begin(),arr[s[j]-'a'].end(),j);
				if(u == arr[s[j]-'a'].end()){
					u--;
					ans += j-*u;
				}else if(u == arr[s[j]-'a'].begin()){
					ans += *u-j;
				}else{
					int temp = *u-j;
					u--;
					temp=min(temp,j-*u);
					ans+=temp;
				}
			}
		}
		cout << ans << endl;
	}
}
