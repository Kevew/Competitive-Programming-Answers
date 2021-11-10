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
	
	void changeval(int a,int x,int lx,int rx){
		if(rx-lx == 1){
			sums[x] = (sums[x]+1)%2;
			return;
		}
		
		int m = (rx+lx)/2;
		if(a < m){
			changeval(a,2*x+1,lx,m);
		}else{
			changeval(a,2*x+2,m,rx);
		}
		sums[x] = sums[2*x+1]+sums[2*x+2];
	}
	
	void changeval(int a){
		changeval(a,0,0,size);
	}
	
	int getK(int a,int left,int x,int lx,int rx){
		if(rx-lx == 1){
			return lx;
		}
		int m = (rx+lx)/2;
		if(left+sums[x*2+1] > a){
			return getK(a,left,x*2+1,lx,m);
		}else{
			return getK(a,left+sums[x*2+1],x*2+2,m,rx);
		}
	}
	
	int getK(int a){
		return getK(a,0,0,0,size);
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
			int b;
			cin >> b;
			newseg.changeval(b);
		}else{
			int b;
			cin >> b;
			cout << newseg.getK(b) << endl;
		}
	}
}
