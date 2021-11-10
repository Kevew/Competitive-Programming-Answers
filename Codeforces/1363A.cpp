#include <bits/stdc++.h>
using namespace std;

int arr[1010];

void solve(){
	int n,x;
	cin >> n >> x;
	int odd = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(arr[i]%2){
			odd++;
		}
	}
	if(odd == 0 || (n==x && odd%2==0) || (n==odd && x%2 == 0)){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
