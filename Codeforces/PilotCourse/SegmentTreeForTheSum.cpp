#include <bits/stdc++.h>
using namespace std;

struct seg{
	int size = 1;
	vector<long long> sums;
	void init(int a){
		size = 1;
		while(size < a) size *= 2;
		sums.assign(2*size,0LL);
	}
	
	void build(vector<long long> &a,int x,int lx,int rx){
		if(rx-lx == 1){
			if(lx < (int)a.size()){
				sums[x] = a[lx];
			}
			return;
		}
		int m = (rx+lx)/2;
		build(a,2*x+1,lx,m);
		build(a,2*x+2,m,rx);
		sums[x] = sums[2*x+1]+sums[2*x+2];
	}
	
	void build(vector<long long> &a){
		build(a,0,0,size);
	}
	
	void addval(int a,int b,int x,int lx,int rx){
		if(rx-lx == 1){
			sums[x] = b;
			return;
		}
		
		int m = (rx+lx)/2;
		if(a < m){
			addval(a,b,2*x+1,lx,m);
		}else{
			addval(a,b,2*x+2,m,rx);
		}
		sums[x] = sums[2*x+1]+sums[2*x+2];
	}
	
	void addval(int a,int b){
		addval(a,b,0,0,size);
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
	
	void getarray(){
		for(int i = 0;i < sums.size();i++){
			cout << sums[i] << " ";
		}
		cout << endl;
	}
	
};

int main(){
	int n,q;
	cin >> n >> q;
	seg newseg;
	newseg.init(n);
	vector<long long> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	newseg.build(arr);
	int temp;
	while(q--){
		cin >> temp;
		if(temp == 1){
			int a,b;
			cin >> a >> b;
			newseg.addval(a,b);
		}else{
			int a,b;
			cin >> a >> b;
			cout << newseg.getsum(a,b) << endl;
		}
	}
}
