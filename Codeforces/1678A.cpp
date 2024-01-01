#include <bits/stdc++.h>
using namespace std;

int arr[110];

void solve(){
	int n;
	cin >> n;
	int a = 0;
	map<int,int> cnt;
	int check  = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(arr[i] == 0){
			a++;
		}
		cnt[arr[i]]++;
		check = max(check,cnt[arr[i]]);
	}
	if(a > 0){
		cout << n-a << endl;
	}else if(check >= 2){
		cout << n << endl;
	}else{
		cout << n+1 << endl;
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
