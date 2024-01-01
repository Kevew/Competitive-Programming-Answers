#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long arr[1001][5010];

int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	long long totalcnt = b;
	for(long long i = 1;i <= b;i++){
		arr[0][i] = 1;
	}
	
	for(long long i = 1;i < a;i++){
		long long value = 0;
		totalcnt = 0;
		for(int j = 1;j <= b;j++){
			totalcnt += arr[i-1][j];
		}
		for(long long j = 1;j <= b;j++){
			if(j == 1){
				long long x;
				for(x = 1;x <= c;x++){
					value = (value+arr[i-1][x])%MOD;
				}
				arr[i][j] = (totalcnt - value)%MOD;
			}else{
				if(j-c >= 1){
					value = (value-arr[i-1][j-c])%MOD;
				}
				if(j+c-1 <= b){
					value = (value + arr[i-1][j+c-1])%MOD;
				}
				arr[i][j] = (totalcnt - value)%MOD;
			}
		}
	}
	
	long long ans = 0;
	for(long long i = 1;i <= b;i++){
		ans = (ans+arr[a-1][i])%MOD;
	}
	cout << ans << endl;
}
