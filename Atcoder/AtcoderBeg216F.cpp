#include <bits/stdc++.h>
using namespace std;

pair<int,int> arr[5010];
const int MOD = 998244353;

int dp[5010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i].first;
	}
	for(int i = 0;i < n;i++){
		cin >> arr[i].second;
	}
	sort(arr,arr+n);
	long long ans = 0;
    dp[0] = 1;
    for(int i = 0;i < n;i++){
        for(int j = arr[i].second; j <= arr[i].first; j++){
            ans = (ans + dp[j - arr[i].second])%MOD;
        }
        for(int j = 5000; j >= arr[i].second; j--){
            dp[j] = (dp[j] + dp[j - arr[i].second])%MOD;
        }
    }
    cout << ans << endl;
}
