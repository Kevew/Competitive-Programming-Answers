#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,m;
	cin >> n >> m;
	vector<long long> arr(m);
	for(long long i = 0;i < m;i++){
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	vector<long long> check(m);
	for(long long i = 0;i < m-1;i++){
		check[i] = abs(arr[i]-arr[i+1])-1;
	}
	check[m-1] = (n-arr[m-1]) + arr[0]-1;
	sort(check.begin(), check.end(), greater<long long>());
	bool protecteded = false;
	long long curr = 0;
	long long ans = 0;
	long long i = 0;
	while(curr < m){
		if(!protecteded){
			ans += min(check[curr],2*i);
			check[curr] -= 2*i;
			if(check[curr] <= 0){
				curr++;
				
				continue;
			}else{
				protecteded = true;
				check[curr]--;
				if(check[curr] <= 0){
					curr++;
					protecteded = false;
				}
			}
		}else{
			check[curr] = 0;
			ans++;
			curr++;
			protecteded = false;
		}
		i++;
	}
	cout << ans+m << endl;
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
