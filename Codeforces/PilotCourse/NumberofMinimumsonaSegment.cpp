#include <bits/stdc++.h>
using namespace std;

struct item{
	int m,c;
};
 
struct seg{
	int size = 1;
	vector<item> minimum;
	
	item merge(item a,item b){
		if(a.m < b.m) return a;
		if(a.m > b.m) return b;
		return {a.m,a.c+b.c};
	}
	
	void init(int a){
		size = 1;
		while(size < a) size *= 2;
		minimum.resize(2*size);
	}
	
	void build(vector<int> &a,int x,int lx,int rx){
		if(rx-lx == 1){
			if(lx < (int)a.size()){
				minimum[x] = {a[lx],1};
			}
			return;
		}
		int m = (rx+lx)/2;
		build(a,2*x+1,lx,m);
		build(a,2*x+2,m,rx);
		minimum[x] = merge(minimum[2*x+1],minimum[2*x+2]);
	}
	
	void build(vector<int> &a){
		build(a,0,0,size);
	}
	
	void addval(int a,int b,int x,int lx,int rx){
		if(rx-lx == 1){
			minimum[x] = {b,1};
			return;
		}
		
		int m = (rx+lx)/2;
		if(a < m){
			addval(a,b,2*x+1,lx,m);
		}else{
			addval(a,b,2*x+2,m,rx);
		}
		minimum[x] = merge(minimum[2*x+1],minimum[2*x+2]);
	}
	
	void addval(int a,int b){
		addval(a,b,0,0,size);
	}
	
	item getmin(int a,int b,int x,int lx,int rx){
		if(lx >= b || a >= rx) return {INT_MAX,1};
		if(lx >= a && rx <= b) return minimum[x];
		int m = (rx+lx)/2;
		item s1 = getmin(a,b,2*x+1,lx,m);
		item s2 = getmin(a,b,2*x+2,m,rx);
		return merge(s1,s2);
	}
	
	item getmin(int a,int b){
		return getmin(a,b,0,0,size);
	}
	
};
 
int main(){
	int n,q;
	cin >> n >> q;
	seg newseg;
	newseg.init(n);
	vector<int> arr(n);
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
			item temp = newseg.getmin(a,b);
			cout << temp.m << " " << temp.c << endl;
		}
	}
}
