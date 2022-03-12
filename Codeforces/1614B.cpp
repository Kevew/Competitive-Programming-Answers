#include <bits/stdc++.h>
using namespace std;

pair<long long,long long> arr[200010];
long long ans[200010];

void solve(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i].first;
		arr[i].second = i;
	}
	sort(arr,arr+n);
	reverse(arr,arr+n);
	long long l = 1,r = -1;
	long long time = 0;
	for(long long i = 0;i < n;i++){
		if(i%2 == 0){
			ans[arr[i].second] = l;
			time += arr[i].first * 2 * l;
			l++;
		}else{
			ans[arr[i].second] = r;
			time += abs(r) * 2 * arr[i].first;
			r--;
		}
	}
	cout << time << endl << "0 ";
	for(long long i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
