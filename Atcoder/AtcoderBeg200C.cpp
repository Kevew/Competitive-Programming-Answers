#include <bits/stdc++.h>
using namespace std;

map<long long,long long> cnt;

int main(){
	long long n;
	cin >> n;
	long long a,ans = 0;
	for(int i = 0;i < n;i++){
		cin >> a;
		a %= 200;
		ans += cnt[a];
		cnt[a]++;
	}
	cout << ans << endl;
}
