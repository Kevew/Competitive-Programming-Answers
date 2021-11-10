#include <bits/stdc++.h>
using namespace std;

double arr[200010];

void solve(){
	int n;
	cin >> n;
	double mean = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		mean += arr[i];
	}
	double temp = n;
	mean /= temp;
	map<double,int> check;
	long long ans = 0;
	mean *= 2;
	for(int i = 0;i < n;i++){
		ans+=check[arr[i]];
		check[mean-arr[i]]++;
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
