#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

void solve(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	long long changes = 0;
	for(long long i = 1;i < n-1;i++){
		if(arr[i-1] < arr[i] && arr[i+1] < arr[i]){
			if(i < n-2){
				arr[i+1] = max(arr[i],arr[i+2]);
			}else{
				arr[i+1] = arr[i];
			}
			changes++;
		}
	}
	cout << changes << endl;
	for(long long i = 0;i < n;i++){
		cout << arr[i] << " ";
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
