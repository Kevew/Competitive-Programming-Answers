#include <bits/stdc++.h>
using namespace std;

long long n,x;
long long arr[70];

map<long long,long long> check[70];

long long solve(int i,long long x){
	if(x == 0){
		return 0;
	}
	if(i == n){
		return 1e18;
	}
	if(check[i].count(x)){
		return check[i][x];
	}
	long long temp = x/arr[i];
	long long &res = check[i][x];
	res = 1e18;
	res = min(res,temp + solve(i+1,x-(arr[i]*temp)));
	res = min(res,temp + 1 + solve(i+1,(arr[i]*(temp+1))-x));
	return res;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> x;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	reverse(arr,arr+n);
	cout << solve(0,x) << endl;
}
