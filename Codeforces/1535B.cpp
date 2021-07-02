#include <bits/stdc++.h>
using namespace std;

int arr[2010];

int gcd(int x,int y){
	if(y==0){
		return x;
	}
	return gcd(y,x%y);
}

void solve(){
	int n;
	cin >> n;
	int test = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		test += (arr[i]&1);
	}
	int m = 0;
	for(int i = 0;i < n;i++){
		for(int j= i+1;j < n;j++){
			if(gcd(arr[i],arr[j]) > 1){
				m++;
				if((arr[i]&1)!=(arr[j]&1)){
					m--;
				}
			}
		}
	}
	cout << m + test * (n-test) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
