#include <bits/stdc++.h>
using namespace std;

struct DSU{
	int dsu[1010];
	void init(){
		for(int i = 1;i <= 1000;i++){
			dsu[i] = i;
		}
	}
	int find(int x){
		return dsu[x] == x ? x : (dsu[x] = find(dsu[x]));
	}
	
	void merge(int x,int y){
		int a = find(x);
		int b = find(y);
		dsu[a] = b;
	}
};

int main(){
	DSU check1,check2;
	int n,m1,m2;
	cin >> n >> m1 >> m2;
	int a,b;
	check1.init();
	check2.init();
	for(int i = 0;i < m1;i++){
		cin >> a >> b;
		check1.merge(a,b);
	}
	
	for(int i = 0;i < m2;i++){
		cin >> a >> b;
		check2.merge(a,b);
	}
	
	vector<pair<int,int>> ans;
	for(int i = 1;i <= n;i++){
		for(int j = i+1;j <= n;j++){
			if(check1.find(i) != check1.find(j) && check2.find(i) != check2.find(j)){
				ans.push_back({i,j});
				check1.merge(i,j);
				check2.merge(i,j);
			}
		}
	}
	cout << ans.size() << endl;
	for(int i = 0;i < ans.size();i++){
		cout << ans[i].first << " " << ans[i].second << endl;
	}
}
