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
	
	void build(vector<int> &a,int x,int lx,int rx){
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
	
	void build(vector<int> &a){
		build(a,0,0,size);
	}

	int check(int a,int x,int lx,int rx){
		if(rx-lx == 1){
			arr[x] = 0;
			return lx;
		}
		int m = (rx+lx)/2;
		if(a >= arr[2*x+2]){
			int ans = check(a-arr[2*x+2],2*x+1,lx,m);
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
	vector<int> arr(n,1);
	newseg.build(arr);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	vector<int> ans(n);
	for(int i = n-1;i >= 0;i--){
		ans[i] = newseg.check(arr[i])+1;
	}
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
	
}
