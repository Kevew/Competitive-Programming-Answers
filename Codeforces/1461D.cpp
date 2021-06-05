#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll arr[100010],prefix[100010];

map<ll,bool> check;

void recur(int l,int r){
	ll sum = prefix[r+1]-prefix[l];
	check[sum] = true;
	int mid = (arr[r]+arr[l])/2;
	int pos = -1;
	for(int i = l;i < r+1;i++){
		if(arr[i] <= mid){
			pos = i;
		}else{
			break;
		}
	}
	if(pos == -1 || pos == r){
		return;
	}
	recur(l,pos);
	recur(pos+1,r);
}

void solve(){
	check.clear();
	int n,q;
	cin >> n >> q;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	prefix[0] = 0;
	for(int i = 1;i <= n;i++){
		prefix[i] = prefix[i-1] + arr[i-1];
	}
	
	recur(0,n-1);
	
	for(int i = 0;i < q;i++){
		int x;
		cin >> x;
		if(check[x] == true){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
