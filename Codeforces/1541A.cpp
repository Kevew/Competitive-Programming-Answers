#include<bits/stdc++.h>
using namespace std;

int t,n,a[110];

void solve(){
	cin >> n;
	for(int i=1;i<=n;i++)a[i]=i;
	for(int i=1;i<n;i+=2)swap(a[i],a[i+1]);
	if(n&1){
		swap(a[n],a[n-1]);
	}
	for(int i=1;i<=n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	cin >> t;
	while(t--){
		solve();
	}
}
