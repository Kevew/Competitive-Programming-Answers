#include <bits/stdc++.h>
using namespace std;

long long arr[500010];

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	long long cnt = 0,ans = 0;
	for(long long i = 0;i < n;i++){
		if(i+1 != arr[i]){
			if(arr[arr[i]-1] == i+1 && arr[i]-1 < i){
				ans++;
			}
		}else{
			ans += cnt;
			cnt++;
		}
	}
	cout << ans << endl;
}
