#include <bits/stdc++.h>
using namespace std;

long long arr[1010];
long long arr2[2010];
long long ans[2010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,m;
	cin >> n >> m;
	for(long long i = 0;i < n+1;i++){
		cin >> arr[i];
	}
	for(int i = 0;i < n+m+1;i++){
		cin >> arr2[i];
	}
	int a = n+m;
	vector<long long> printout;
	for(long long i = 0;i < m+1;i++){
		long long diff = arr2[a-i]-ans[a-i];
		long long value = diff/arr[n];
		printout.push_back(value);
		for(long long j = 0;j < n+1;j++){
			ans[a-i-j] += value*arr[n-j];
		}
	}
	reverse(printout.begin(),printout.end());
	for(auto i: printout){
		cout << i << " ";
	}
}
/*
1 2
12 14 8 2
12 8 4
   6 4 2
6 4 2
2 1
*/
