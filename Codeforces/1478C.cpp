#include <bits/stdc++.h>
using namespace std;

long long arr[200010],values[200010],d[200010];

void solve(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n*2;++i){
		cin >> arr[i];
	}
	sort(arr,arr+n*2,greater<long long>());
	for(long long i = 0;i < n;i++){
		if(arr[i*2] != arr[i*2+1]){
			cout << "NO\n";
			return;
		}
		values[i] = arr[i*2];
	}
	for(long long i = 1;i < n;i++){
		if(values[i-1] == values[i]||(values[i-1]-values[i])%(2*(n-i))){
			cout << "NO" << endl;
			return;
		}
		d[i] = (values[i-1]-values[i])/2/(n-i);
	}
	for(long long i = 1;i < n;i++){
        values[n-1] -= 2*i*d[i];
    }
    if(values[n-1] <= 0||values[n-1]%(2*n)){
    	cout << "NO\n";
	}else{
    	cout << "YES\n";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
