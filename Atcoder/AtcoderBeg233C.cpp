#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	map<long long,long long> ans;
	ans[m] = 1;
	for(long long i = 0;i < n;i++){
		long long temp;
		cin >> temp;
		map<long long,long long> newbag;
		for(long long j = 0;j < temp;j++){
			long long a;
			cin >> a;
			for(auto i: ans){
				if(i.first%a == 0){
					newbag[i.first/a] += i.second;
				}
			}
		}
		ans = newbag;
	}
	cout << ans[1] << endl;
}
