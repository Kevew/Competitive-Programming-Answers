#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	if(m > n){
		swap(n,m);
	}
	int total = n+m;
	set<int> temp;
	temp.insert(abs((total+1)/2 - n));
	temp.insert(abs((total+1)/2 - m));
	temp.insert(abs(total/2 - n));
	temp.insert(abs(total/2 - m));
	
	set<int> sol;
	for(int i = 1;i <= m;i++){
		for(auto j: temp){
			sol.insert(j+(i*2));
		}
	}
	for(auto i:temp){
		sol.insert(i);
	}
	
	cout << sol.size() << endl;
	for(auto i: sol){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
