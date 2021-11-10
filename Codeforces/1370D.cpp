#include<bits/stdc++.h>
using namespace std;

const int maxn=2e5+100;
int n,k;
int a[maxn];

bool check (int x,int f){
	int tot=0;
	for (int i=1;i<=n;i++) 
		if (f||a[i]<=x) tot++,f=!f;
	return tot>=k;
}
int main () {
	cin >> n >> k;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	int l = 1,r = 1e9,ans = 0;
	while(l <= r){
		int mid = l+(r-l)/2;
		if(check(mid,0)||check(mid,1)){
			ans = mid;
			r = mid-1;
		}else{
			l = mid+1;
		}
	}
	cout << ans << endl;
}
