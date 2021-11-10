#include <bits/stdc++.h>
using namespace std;
 
struct item{
	int a,b,c;
};
 
string a;
 
struct seg{
	int size = 1;
	vector<item> arr;
	void init(int n){
		while(size < n) size *= 2;
		arr.resize(size*2);
	}
	
	item newitem(char x){
		if(x == '('){
			return {0,1,0};
		}else{
			return {0,0,1};
		}
	}
	
	item merge(item f,item s){
		int x = min(f.b,s.c);
		return {f.a+s.a+x*2,
				f.b+s.b-x,
				f.c+s.c-x};
	}
	
	void build(int x,int lx,int rx){
		if(rx-lx == 1){
			if(lx < (int)a.size()){
				arr[x] = newitem(a[lx]);
			}
			return;
		}
		int m = (rx+lx)/2;
		build(2*x+1,lx,m);
		build(2*x+2,m,rx);
		arr[x] = merge(arr[2*x+1],arr[2*x+2]);
	}
	
	void build(){
		build(0,0,size);
	}
	
	
	item getsum(int a,int b,int x,int lx,int rx){
		if(lx >= b || a >= rx) return {0,0,0};
		if(lx >= a && rx <= b) return arr[x];
		int m = (rx+lx)/2;
		item s1 = getsum(a,b,2*x+1,lx,m);
		item s2 = getsum(a,b,2*x+2,m,rx);
		return merge(s1,s2);
	}
	item getsum(int a,int b){
		return getsum(a,b,0,0,size);
	}
};
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> a;
	seg newseg;
	newseg.init(a.size());
	newseg.build();
	int q;
	cin >> q;
	int f,s;
	while(q--){
		cin >> f >> s;
		cout << newseg.getsum(f-1,s).a << endl;
	}
	
}
