#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,m,d;
	cin >> n >> m >> d;
	long long arr[m+2];
	arr[0] = 1;
	long long waste[2] = {0,0};
	for(long long i = 1;i <= m;i++){
		cin >> arr[i];
		if(arr[i] == 1 && i == 1){
			i--;
			m--;
			waste[0]++;
			continue;
		}
	}
	arr[m+1] = n+1;
	
	long long val[m+2];
	val[0] = 1;
	for(long long i = 1;i <= m+1;i++){
		long long dis = arr[i]-arr[i-1];
		dis--;
		long long cnt = dis/d;
		val[i] = val[i-1] + cnt + 1;
		//cout << val[i] << " ";
	}
	//cout << endl;
	for(long long i = 2;i <= m+1;i++){
		long long dis = arr[i]-arr[i-2];
		dis--;
		long long cnt = dis/d + 1;
		long long nor = val[i] - val[i-2];
		if(cnt < nor){
			waste[1]++;
		}else{
			waste[0]++;
		}
	}
	if(waste[1] > 0){
		cout << val[m+1] - 2 << " " << waste[1] << endl;
	}else{
		cout << val[m+1] - 1 << " " << waste[0] << endl;
	}
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
