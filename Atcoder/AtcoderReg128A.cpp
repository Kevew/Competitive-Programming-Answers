#include <bits/stdc++.h>
using namespace std;

long arr[200010];
int ans[200010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long double n;
	cin >> n;
	for(long long i = 1;i <= n;i++){
		cin >> arr[i];
	}
	for(int i = 1;i <= n-1;i++){
		if(arr[i] > arr[i+1]){
			ans[i] ^= 1;
			ans[i+1] ^= 1;
		}
	}
	for(int i = 1;i <= n;i++){
		cout << ans[i] << " ";
	}
}
