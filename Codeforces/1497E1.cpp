#include <bits/stdc++.h>
using namespace std;

int sieves[10000010];
int smfactor[10000010];
vector<int> primes;

int primeFactorization(int n){
	vector<pair<int,int>> ans;
	while(n > 1){
		int p = smfactor[n];
		ans.push_back(make_pair(p,0));
		while(n%p == 0){
			n /= p;
			ans.back().second++;
		}
	}
	int returnresult = 1;
	for(auto p:ans){
		if(p.second%2 != 0){
			returnresult *= p.first;
		}
	}
	return returnresult;
}

void solve(){
	int n,k;
	cin >> n >> k;
	int temp;
	vector<int> N;
	for(int i = 0;i < n;i++){
		cin >> temp;
		N.push_back(primeFactorization(temp));
	}
	
	set<int> seen;
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(!seen.insert(N[i]).second){
			ans++;
			seen.clear();
			seen.insert(N[i]);
		}
	}
	ans += !seen.empty();
	cout << ans << endl;
}

void sieve(){
	for(int i = 2;i <= 1e7;i += 2){
		sieves[i] = 1;
		smfactor[i] = 2;
	}
	primes.push_back(2);
	for(int i = 3;i <= 1e7;i += 2){
		if(sieves[i] == 0){
			primes.push_back(i);
			for(int j = i;j <= 1e7;j += i){
				sieves[j] = 1;
				smfactor[j] = i;
			}
		}
	}
}

int main(){
	sieve();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
