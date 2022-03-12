#include <bits/stdc++.h>
using namespace std;

int main(){
	long long  n;
	cin >> n;
	long long ans = 0;
	for(long long  i = 1;i <= 50000;i++){
		for(long long j = i;;j++){
			long long temp = n/(i*j);
			if(temp < j){
				break;
			}else{
				ans += max(0LL,temp-j+1);
			}
		}
	}
	cout << ans << endl;
}
