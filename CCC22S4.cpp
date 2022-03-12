#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	map<long long,long long> arr;
	long long a;
	long long diff = (m+1)/2;
	for(long long i = 0;i < n;i++){
		cin >> a;
		arr[a]++;
	}
	vector<long long> pos;
	for(auto i: arr){
		pos.push_back(i.first);
	}
	long long ans = 0;
	for(long long i = 0;i < pos.size();i++){
		for(long long j = i+1;j < pos.size();j++){
			for(long long x = j+1;x < pos.size();x++){
				a = pos[i];
				long long b = pos[j];
				long long c = pos[x];
				if(a+diff < c && b+diff > c && a+diff > b && b+diff < a+m){
				//	cout << a << " " << b << " " << c << endl;
					ans += arr[a]*arr[b]*arr[c];
				}
			}
		}
	}
	
	cout << ans << endl;
}
