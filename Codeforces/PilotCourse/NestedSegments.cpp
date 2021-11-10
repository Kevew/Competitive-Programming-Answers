#include <bits/stdc++.h>
using namespace std;

map<int,pair<int,int>> pos;

struct seg{
	int size;
	vector<long long> sums;
	
	void init(int n){
		size = 1;
		while(size < n) size *= 2;
		sums.resize(size*2);
	}
	
	void addval(int a,int x,int lx,int rx){
		if(rx-lx == 1){
			sums[x] = 1;
			return;
		}
		int m = (rx+lx)/2;
		if(a < m){
			addval(a,2*x+1,lx,m);
		}else{
			addval(a,2*x+2,m,rx);
		}
		sums[x] = sums[2*x+1]+sums[2*x+2];
	}
	
	void addval(int a){
		addval(a,0,0,size);
	}
	
	long long getsum(int a,int b,int x,int lx,int rx){
		if(lx >= b || a >= rx) return 0LL;
		if(lx >= a && rx <= b) return sums[x];
		int m = (rx+lx)/2;
		long long s1 = getsum(a,b,2*x+1,lx,m);
		long long s2 = getsum(a,b,2*x+2,m,rx);
		return s1+s2;
	}
	
	long long getsum(int a,int b){
		return getsum(a,b,0,0,size);
	}
};
 

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<long long> arr(n*2);
	for(int i = 0;i < n*2;i++){
		cin >> arr[i];
		if(!pos.count(arr[i])){
			pos[arr[i]].first = i;
		}else{
			pos[arr[i]].second = i;
		}
	}
	seg t;
	t.init(n*2);
	vector<long long> ans(n);
	for(int i = 0;i < n*2;i++){
		if(pos[arr[i]].second == i){
			ans[arr[i]-1] = t.getsum(pos[arr[i]].first,pos[arr[i]].second);
			t.addval(pos[arr[i]].first);
		}
	}
	
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
}
