#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int cnt = 0,ans = 1010;
	for(int i = 0;i < n;i++){
		if(a[i]-'0' != i%2){
			cnt++;
		}
	}
	ans = min(cnt,ans);
	cnt = 0;
	for(int i = 0;i < n;i++){
		if(a[i]-'0' != (i+1)%2){
			cnt++;
		}
	}
	ans = min(cnt,ans);
	cout << ans << endl;
}
