#include <bits/stdc++.h>
using namespace std;

struct item{
	long long seg,pref,suf,sum;
};
 
struct seg{
	int size = 1;
	vector<item> minimum;
	
	item NEUTRAL_ELEMENT = {0,0,0,0};
	
	item merge(item a,item b){
		return{
			max(a.seg,max(b.seg,a.suf + b.pref)),
			max(a.pref,a.sum+b.pref),
			max(b.suf,b.sum + a.suf),
			a.sum+b.sum
		};
	}
	
	item single(int v){
		if(v > 0){
			return {v,v,v,v};
		}else{
			return {0,0,0,v};
		}
	}
	
	void init(int a){
		size = 1;
		while(size < a) size *= 2;
		minimum.resize(2*size);
	}
	
	void build(vector<int> &a,int x,int lx,int rx){
		if(rx-lx == 1){
			if(lx < (int)a.size()){
				minimum[x] = single(a[lx]);
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
			minimum[x] = single(b);
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
	
	item calc(int a,int b,int x,int lx,int rx){
		if(lx >= b || a >= rx) return NEUTRAL_ELEMENT;
		if(lx >= a && rx <= b) return minimum[x];
		int m = (rx+lx)/2;
		item s1 = calc(a,b,2*x+1,lx,m);
		item s2 = calc(a,b,2*x+2,m,rx);
		return merge(s1,s2);
	}
	
	item calc(int a,int b){
		return calc(a,b,0,0,size);
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
	cout << newseg.calc(0,n).seg << endl;
	while(q--){
		int a,b;
		cin >> a >> b;
		newseg.addval(a,b);
		cout << newseg.calc(0,n).seg << endl;
	}
}

