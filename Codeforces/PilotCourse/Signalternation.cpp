#include <bits/stdc++.h>
using namespace std;

struct item{
	long long pos,neg;
};

struct seg{
	int size;
	vector<item> arr;
	
	void init(int n){
		size = 1;
		while(size < n) size *= 2;
		arr.resize(size*2);
	}
	
	item merge(item a,item b){
		return {a.pos+b.pos,a.neg+b.neg};
	}
	
	item setup(long long a,int lx){
		if(lx%2==0){
			return {a,0-a};
		}else{
			return {0-a,a};
		}
	}
	
	void build(vector<long long> &a,int x,int lx,int rx){
		if(rx-lx == 1){
			if(lx < (int)a.size()){
				arr[x] = setup(a[lx],lx);
			}
			return;
		}
		int m = (rx+lx)/2;
		build(a,2*x+1,lx,m);
		build(a,2*x+2,m,rx);
		arr[x] = merge(arr[2*x+1],arr[2*x+2]);
	}
	
	void build(vector<long long> &a){
		return build(a,0,0,size);
	}
		
	void addval(int a,long long b,int x,int lx,int rx){
		if(rx-lx == 1){
			arr[x] = setup(b,lx);
			return;
		}
		int m = (rx+lx)/2;
		if(a < m){
			addval(a,b,2*x+1,lx,m);
		}else{
			addval(a,b,2*x+2,m,rx);
		}
		arr[x] = merge(arr[x*2+1],arr[x*2+2]);
	}
	
	void addval(int a,long long b){
		addval(a,b,0,0,size);
	}
	
	long long getsum(int a,int b,int check,int x,int lx,int rx){
		if(a <= lx && b >= rx){
			if(check%2==0){
				return arr[x].pos;
			}
			return arr[x].neg;
		}
		if(lx >= b || a >= rx) return 0;
		int m = (rx+lx)/2;
		long long s1 = getsum(a,b,check,x*2+1,lx,m);
		long long s2 = getsum(a,b,check,x*2+2,m,rx);
		return s1+s2;
	}
	
	long long getsum(int a,int b,int check){
		return getsum(a,b,check,0,0,size);
	}

};

int main(){
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	seg tree;
	tree.init(n);
	vector<long long> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	tree.build(arr);
	int temp;
	int q;
	cin >> q;
	for(int i = 0;i < q;i++){
		cin >> temp;
		if(temp == 0){
			int a,b;
			cin >> a >> b;
			tree.addval(a-1,b);
		}else{
			int a,b;
			cin >> a >> b;
			cout << tree.getsum(a-1,b,a-1) << endl;
		}
	}
}
