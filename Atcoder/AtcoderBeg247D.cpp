#include <bits/stdc++.h>
using namespace std;

int main(){
	deque<pair<long long,long long>> test;
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		long long t;
		cin >> t;
		if(t == 1){
			long long a,b;
			cin >> a >> b;
			test.push_back({a,b});
		}else{
			long long a;
			cin >> a;
			long long ans = 0;
			while(test.size() > 0 && a >= test[0].second){
				ans += test[0].first*test[0].second;
				a -= test[0].second;
				test.pop_front();
			}
			if(test.size() > 0){
				ans += test[0].first*a;
				test[0].second -= a;
			}
			cout << ans << endl;
		}
	}
}
