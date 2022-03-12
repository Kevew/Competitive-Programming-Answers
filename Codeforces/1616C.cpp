#include <bits/stdc++.h>
using namespace std;

double arr[100];
map<double,int> test;

void solve(){
	test.clear();
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		test[arr[i]]++;
	}
	int ans = 100;
	for(auto i: test){
		ans = min(ans,n-i.second);
	}
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			double curr = (arr[i]-arr[j])/(j-i);
			curr *= -1;
			int temp = 0;
			for(int z = 0;z < n;z++){
				if(arr[z] != arr[i]-((i-z)*curr)){
					temp++;
				}
			}
			ans = min(ans,temp);
		}
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
