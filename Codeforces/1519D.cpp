#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll a[5010],b[5010],pr[5010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		cin >> b[i];
	}
	
	pr[0] = 0;
	for(int i = 0;i < n;i++){
		pr[i+1] = pr[i] + a[i]*b[i];
	}
	ll ans = pr[n];
	for(int i = 0;i < n;i++){
		ll cur = a[i]*b[i];
		for(int l = i-1,r = i+1;l >= 0 && r < n;r++,l--){
			cur += a[l]*b[r];
			cur += a[r]*b[l];
			ans = max(ans,cur+pr[l]+(pr[n]-pr[r+1]));
		}
		cur = 0;
		for(int l = i,r = i+1;l >= 0 && r < n;r++,l--){
			cur += a[l]*b[r];
			cur += a[r]*b[l];
			ans = max(ans,cur+pr[l]+(pr[n]-pr[r+1]));
		}
	}
	
	cout << ans << endl;
}
