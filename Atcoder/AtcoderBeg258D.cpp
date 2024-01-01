#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,x;
	cin >> n >> x;
	long long minimumtime = 2e18;
	long long timern = 0;
	long long clear = 0;
	for(long long i = 0;i < n;i++){
		long long a,b;
		cin >> a >> b;
		timern += a;
		timern += b;
		clear++;
		if(clear == x){
			minimumtime = min(minimumtime,timern);
			break;
		}
		minimumtime = min(minimumtime,(x-clear)*b+timern);
	}
	cout << minimumtime << endl;
}
