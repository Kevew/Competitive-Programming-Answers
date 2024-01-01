#include <bits/stdc++.h>
using namespace std;

map<string,int> cnt;

int main(){
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0;i < n;i++){
		string a;
		cin >> a;
		if(cnt.find(a) == cnt.end()){
			reverse(a.begin(),a.end());
			if(cnt.find(a) == cnt.end()){
				ans++;
			}
		}
		
		cnt[a]++;
	}
	cout << ans << endl;
}
