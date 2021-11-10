#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<vector<ll>> arr(n),weights(n);
	ll a,b,c;
	for(int i = 0;i < n-1;i++){
		cin >> a >> b >> c;
		a--,b--;
		arr[a].push_back(b);
		arr[b].push_back(a);
		weights[a].push_back(c);
		weights[b].push_back(c);
	}
	
	vector<ll> dist(n,-1);
	queue<ll> q;
	q.push(0);
	dist[0] = 0;
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		for(int i = 0;i < arr[curr].size();i++){
			int next = arr[curr][i];
			ll sum = dist[curr]^weights[curr][i];
			if(dist[next] == -1){
				dist[next] = sum;
				q.push(next);
			}
		}
	}
	ll ans = 0;
	for(int i = 0;i < 60;i++){
		vector<ll> cnt(2);
		for(int j = 0;j < n;j++){
			cnt[(dist[j]>>i)&1]++;
		}
		ans += ((1LL << i)%mod * cnt[0]%mod * cnt[1])%mod;
		ans %= mod;
	}
	cout << ans << endl;
}
