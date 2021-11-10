#include <bits/stdc++.h>
using namespace std;

long long a[100010],b[100010],c[100010];
map<long long,long long> arr;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		cin >> b[i];
	}
	for(int i = 0;i < n;i++){
		cin >> c[i];
		c[i]--;
		arr[b[c[i]]]++;
	}
	
	long long ans = 0;
	for(int i = 0;i < n;i++){
		ans += arr[a[i]];
	}
	cout << ans << endl;
}
