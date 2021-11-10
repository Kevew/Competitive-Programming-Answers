#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> arr,paths;
vector<int> in,out,depth;
int timer = 0;

void dfs(int curr){
	in[curr] = timer;
	timer++;
	arr[depth[curr]].push_back(timer-1);
	for(int i: paths[curr]){
		depth[i] = depth[curr]+1;
		dfs(i);
	}
	out[curr] = timer;
	timer++;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a;
	arr = paths = vector<vector<int>>(n);
	depth = in = out = vector<int>(n);
	for(int i = 0;i < n-1;i++){
		cin >> a;
		paths[a-1].push_back(i+1);
	}
	dfs(0);
	int q;
	cin >> q;
	while(q--){
		int f,s;
		cin >> f >> s;
		f--;
		cout << lower_bound(arr[s].begin(),arr[s].end(),out[f])-lower_bound(arr[s].begin(),arr[s].end(),in[f]) << endl;
	}
}
