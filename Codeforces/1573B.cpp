#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll t,n,ans;
string s;

int main(){
	cin >> t;
	while(t--){
		cin >> n;
		ll mn1 = 1e18,mn2 = 1e18, m[200009], val, arr[400018];
		for(ll i=0; i<n; i++){
			cin>>val;
			m[val]=i;
		}
		for(ll i=1; i<n*2; i+=2){
			mn1=min(mn1,m[i]);
			arr[i]=mn1;
		}
		for(ll i=0; i<n; i++){
			cin>>val;
			mn2=min(mn2,arr[val-1]+i);
		}
		cout << mn2 <<endl;
	}
}

