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
	
	/*
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
		arr[x] = arr[2*x+1]+arr[2*x+2];
	}
	
	void build(vector<long long> &a){
		build(a,0,0,size);
	}
	
	
	void changeval(int a,int x,int lx,int rx){
		if(rx-lx == 1){
			arr[x] = 1;
			return;
		}
		int m = (rx+lx)/2;
		if(a < m){
			changeval(a,2*x+1,lx,m);
		}else{
			changeval(a,2*x+2,m,rx);
		}
		arr[x] = arr[2*x+1]+arr[2*x+2];
	}
	
	void changeval(int a){
		changeval(a,0,0,size);
	}
	
	*/
	int check(int a,int x,int lx,int rx){
		if(rx-lx == 1){
			arr[x] = 1;
			return 0;
		}
		int m = (rx+lx)/2;
		if(a < m){
			int ans = check(a,2*x+1,lx,m) + arr[2*x+2];
			arr[x] = arr[2*x+1]+arr[2*x+2];
			return ans;
		}else{
			int ans = check(a,2*x+2,m,rx);
			arr[x] = arr[2*x+1]+arr[2*x+2];
			return ans;
		}
	}
	
	int check(int a){
		return check(a,0,0,size);
	}
};
 
int main(){
	int n;
	cin >> n;
	seg newseg;
	newseg.init(n);
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		cout << newseg.check(a-1) << endl;
	}
	
}
