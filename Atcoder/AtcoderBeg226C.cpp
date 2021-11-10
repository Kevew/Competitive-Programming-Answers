#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

vector<long long> paths[200010];

bool visited[200010];
long long ans = 0;

void dfs(long long pos){
	if(!visited[pos]){
		ans += arr[pos];
		visited[pos] = true;
		for(auto i: paths[pos]){
			dfs(i);
		}
	}
}

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		long long a,b;
		cin >> a;
		for(long long j = 0;j < a;j++){
			cin >> b;
			b--;
			paths[i].push_back(b);
		}
	}
	dfs(n-1);
	cout << ans << endl;
}


