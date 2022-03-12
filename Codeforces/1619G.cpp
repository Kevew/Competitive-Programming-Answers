#include <bits/stdc++.h>
using namespace std;

int parent[200010];
int sizearr[200010];
int totalcomponenets;

int find_edge(int a){
	if(a == parent[a]){
		return a;
	}
	return find_edge(parent[a]);
}

void connect(int a,int b){
	a = find_edge(a);
	b = find_edge(b);
	if(a != b){
		if(sizearr[a] < sizearr[b]){
			swap(a,b);
		}
		totalcomponenets--;
		parent[b] = a;
		sizearr[a] += sizearr[b];
	}
}

void solve(){
	int n,k;
	cin >> n >> k;
	totalcomponenets = n;
	vector<int> X(n),Y(n),T(n);
	map<int,set<pair<int,int>>> xy,yx;
	for(int i = 0;i < n;i++){
		cin >> X[i] >> Y[i] >> T[i];
		xy[X[i]].emplace(make_pair(Y[i],i));
		yx[Y[i]].emplace(make_pair(X[i],i));
	}
	for(int i = 0;i <= n;i++){
		parent[i] = i;
		sizearr[i] = 1;
	}
	for(int i = 0;i < n;i++){
		auto it = xy[X[i]].lower_bound(make_pair(Y[i]+1,0));
		if(it != xy[X[i]].end() && it->first <= Y[i]+k){
			connect(i,it->second);
		}
		it = yx[Y[i]].lower_bound(make_pair(X[i]+1,0));
		if(it != yx[Y[i]].end() && it->first <= X[i]+k){
			connect(i,it->second);
		}
	}
	vector<int> ans(n,1e9);
	for(int i = 0;i < n;i++){
		int root = find_edge(i);
		ans[root] = min(ans[root],T[i]);
	}
	sort(ans.begin(),ans.end());
	ans.resize(totalcomponenets);
	int a = ans.size();
	int answer = a-1;
	for(int i = 0;i < a;i++){
		int suf = max(a-i-2,0);
		answer = min(answer,max(suf,ans[i]));
	}
	cout << answer << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
