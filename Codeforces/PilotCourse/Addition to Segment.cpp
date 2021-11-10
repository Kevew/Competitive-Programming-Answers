#include <bits/stdc++.h>
using namespace std;

struct seg{
	int size;
	vector<long long> arr;
	void init(int n){
		size = 1;
		while(size < n) size *= 2;
		arr.resize(size*2);
		fill(arr.begin(),arr.end(),0);
	}
	
	void addval(int a,long long b,int x,int lx,int rx){
		if(rx-lx == 1){
			arr[x] += b;
			return;
		}
		int m = (rx+lx)/2;
		if(a < m){
			addval(a,b,2*x+1,lx,m);
		}else{
			addval(a,b,2*x+2,m,rx);
		}
		arr[x] = arr[x*2+1] + arr[x*2+2];
	}
	
	void addval(int a,long long b){
		addval(a,b,0,0,size);
	}
	
	long long getsum(int a,int b,int x,int lx,int rx){
		if(a <= lx && b >= rx) return arr[x];
		if(lx >= b || a >= rx) return 0;
		int m = (rx+lx)/2;
		long long s1 = getsum(a,b,x*2+1,lx,m);
		long long s2 = getsum(a,b,x*2+2,m,rx);
		return s1+s2;
	}
	
	long long getsum(int a,int b){
		return getsum(a,b,0,0,size);
	}
	
	
	void printout(){
		for(int i = 0;i < arr.size();i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main(){
	ios_base::sync_with_stdio(0);
	int n,m;
	cin >> n >> m;
	int temp;
	n++;
	seg tree;
	tree.init(n);
	for(int i = 0;i < m;i++){
		cin >> temp;
		if(temp == 1){
			long long l,r,v;
			cin >> l >> r >> v;
			tree.addval(l,v);
			tree.addval(r,(0-v));
		}else{
			int a;
			cin >> a;
			cout << tree.getsum(0,a+1) << endl;
		}
	}
}
