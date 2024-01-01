#include <bits/stdc++.h>
using namespace std;

pair<long long,long long> arr[10000];

int main(){
	long long n,m;
	cin >> n >> m;
	long long a,b;
	for(long long i = 0;i < m;i++){
		cin >> a >> b;
		a--;
		b--;
		arr[i] = {a,b};
	}
	long long ans = 0;
	for(long long i = 0;i < (1<<n);i++){
		long long curr = 0;
		for(long long j = 0;j < n;j++){
			if((1<<j)&i){
				curr++;
			}
		}
		bool fail = false;
		for(long long j = 0;j < m;j++){
			if(((1<<arr[j].first)&i) && ((1<<arr[j].second)&i)){
				fail = true;
				break;
			}
		}
		if(!fail){
			ans = max(curr,ans);
		}
	}
	cout << ans << endl;
}
//4 2
//1 2
//3 4
