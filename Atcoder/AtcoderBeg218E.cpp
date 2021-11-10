#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct DSU{
  	vector<ll> T;
  	DSU(ll N){
    	for(ll i = 0; i < N; i++){
      		T.push_back(i);
    	}
  	}
  	ll root(ll a){
    	if (T[a] != a) {
      		return T[a] = root(T[a]);
    	}
    	return a;
  	}
  	void unite(ll a, ll b){
    	ll ra = root(a);
    	ll rb = root(b);
    	T[ra] = rb;
  	}
  	bool same(ll a, ll b){
    	return root(a) == root(b);
  	}
};

vector<pair<ll,pair<ll,ll>>> arr;

int main(){
  	ll n,m;
	cin >> n >> m;
	
	ll a,b,c;
	ll sum = 0;
	for(ll i = 0;i < m;i++){
    	cin >> a >> b >> c;
		a--,b--;
    	sum += c;
    	arr.push_back({c,{a,b}});
  	}
  	sort(arr.begin(),arr.end());
  	DSU dsu(n);
  	for(auto curr: arr){
  		if(!dsu.same(curr.second.first,curr.second.second)){
  			sum -= curr.first;
  			dsu.unite(curr.second.first,curr.second.second);
		}else if(curr.first <= 0){
			sum = sum-curr.first;
			dsu.unite(curr.second.first,curr.second.second);
		}
	}
	cout << sum << endl;
  	
}
