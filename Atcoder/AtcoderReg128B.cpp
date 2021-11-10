#include <bits/stdc++.h>
using namespace std;

long long arr[3];

long long check(long long x,long long y){
	if((y-x)%3 == 0){
		return x+y-x;
	}else{
		return 1e18;
	}
}

void solve(){
	for(int i = 0;i < 3;i++){
		cin >> arr[i];
	}
	sort(arr,arr+3);
	long long answer = 1e18;
	answer = min(answer,check(arr[0],arr[1]));
	answer = min(answer,check(arr[0],arr[2]));
	answer = min(answer,check(arr[1],arr[2]));
	if(answer != 1e18){
		cout << answer << endl;
	}else{
		cout << "-1" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}	
