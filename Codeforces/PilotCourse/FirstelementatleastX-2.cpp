#include <bits/stdc++.h>
using namespace std;

struct seg{
	int size;
	vector<int> arr;
	
	void init(int n){
		size = 1;
		while(size < n) size *= 2;
		arr.resize(size*2);
	}
	
	void build(vector<long long> &a,int x,int lx,int rx){
		if(rx-lx == 1){
			if(lx < (int)a.size()){
				arr[x] = a[lx];
			}
			return;
		}
		int m = (rx+lx)/2;
		build(a,2*x+1,lx,m);
		build(a,2*x+2,m,rx);
		arr[x] = max(arr[2*x+1],arr[2*x+2]);
	}
	
	void build(vector<long long> &a){
		build(a,0,0,size);
	}
	
	void changeval(int a,int b,int x,int lx,int rx){
		if(rx-lx == 1){
			arr[x] = b;
			return;
		}
		
		int m = (rx+lx)/2;
		if(a < m){
			changeval(a,b,2*x+1,lx,m);
		}else{
			changeval(a,b,2*x+2,m,rx);
		}
		arr[x] = max(arr[2*x+1],arr[2*x+2]);
	}
	
	void changeval(int a,int b){
		changeval(a,b,0,0,size);
	}
	
	int findele(int a,int b,int x,int lx,int rx){
		if(arr[x] < a){
			return -1;
		}
		if(rx <= b){
			return -1;
		}
		if(rx-lx == 1){
			return lx;
		}
		int m = (lx+rx)/2;
		int check = findele(a,b,2*x+1,lx,m);
		if(check == -1){
			check = findele(a,b,2*x+2,m,rx);
		}
		return check;
	}
	
	int findele(int a,int b){
		return findele(a,b,0,0,size);
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
			newseg.changeval(a,b);
		}else{
			int a,b;
			cin >> a >> b;
			cout << newseg.findele(a,b) << endl;
		}
	}
}
