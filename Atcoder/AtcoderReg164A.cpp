#include <bits/stdc++.h>
using namespace std;

vector<long long> mul;

int main(){
	long long i = 1;
	while(i <= 1e18){
		mul.push_back(i);
		i *= 3;
	}
	
	long long t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		long long cnt = 0;
		for(long long i = mul.size()-1;i >= 0;i--){
			while(n-mul[i] >= 0){
				n -= mul[i];
				cnt++;
			}
		}
		if(cnt > k){
			cout << "No" << endl;
		}else{
			if((k-cnt)%2 == 0){
				cout << "Yes" << endl;
			}else{
				cout << "No" << endl;
			}
		}
	}
}

