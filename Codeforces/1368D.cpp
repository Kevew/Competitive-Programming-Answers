#include <bits/stdc++.h>
using namespace std;

long long cnt[200010];

long long main(){
	long long n;
	cin >> n;
	long long temp;
	for(long long i = 0;i < n;i++){
		cin >> temp;
		for(long long bit = 0;bit < 20;bit++){
			if(temp&(1 << bit)){
				cnt[bit]++;
			}
		}
	}
	long long answer = 0;
	for(long long i = 0;i < n;i++){
		long long x = 0;
		for(long long bit = 0;bit < 20;bit++){
			if(cnt[bit]){
				x |= (1 << bit);
				cnt[bit]--;
			}
		}
		answer += x*x;
	}
	cout << answer << endl;
}
