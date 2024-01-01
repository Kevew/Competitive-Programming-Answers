#include <bits/stdc++.h>
using namespace std;

long long N, K, k, ans;

int main(){
	cin >> N >> K;
	for (long long i = K; i; i /= 10)k = k * 10 + i % 10;
	if(k < K){
		cout << "0" << endl;
	}
	else{
		if(k != K){
			while(k <= N){
				ans++;
				k *= 10;
			}
		}
		while (K <= N){
			ans++;
			K *= 10;
		}
		cout << ans << endl;
	}
}
