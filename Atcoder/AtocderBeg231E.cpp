#include <bits/stdc++.h>
using namespace std;

long long arr[70];
map<long long,long long> check[70];

long long n,m;

long long solve(long long i,long long curr){
	if(curr == 0){
		return 0;
	}
	if(n == i){
		return 1e18;
	}
	if(check[i].count(curr)){
		return check[i][curr];
	}
	long long temp = curr/arr[i];
	long long &res = check[i][curr];
	res = 1e18;
	res = min(res,temp+solve(i+1,curr-(arr[i]*temp)));
	res = min(res,temp+1+solve(i+1,(arr[i]*(temp+1))-curr));
	return res;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	reverse(arr,arr+n);
	cout << solve(0,m) << endl;
}
