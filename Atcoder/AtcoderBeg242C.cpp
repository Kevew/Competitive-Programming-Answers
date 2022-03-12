#include <bits/stdc++.h>
using namespace std;

int arr[2][10];

const int MOD = 998244353;

int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= 9;i++){
		arr[0][i] = 1;
	}
	arr[0][0] = 0;
	int next = 1;
	for(int i = 1;i < n;i++){
		for(int i = 0;i <= 9;i++){
			arr[next][i] = 0;
		}
		
		for(int i = 0;i <= 9;i++){
			if(i <= 8){
				arr[next][i+1] = (arr[next][i+1]+arr[1-next][i])%MOD;
			}
			if(i >= 2){
				arr[next][i-1] = (arr[next][i-1]+arr[1-next][i])%MOD;
			}
			arr[next][i] = (arr[next][i]+arr[1-next][i])%MOD;
		}
		
		
		next = 1-next;
	}
	long long ans = 0;
	for(int i = 1;i <= 9;i++){
		ans = (ans+arr[1-next][i])%MOD;
	}
	cout << ans << endl;
}
