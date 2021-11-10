#include <bits/stdc++.h>
using namespace std;

const int maxm = 1e7+10;

struct item{
	int l,r,sum,len;
}segtree[maxm];

void change(int pos){
	int l = segtree[pos].l, r = segtree[pos].r;
	if(segtree[pos].sum){
		segtree[pos].len = r-l+1;
	}else{
		segtree[pos].len = segtree[pos*2].len + segtree[pos*2+1].len;
	}
}

void build(int l,int r,int pos){
	segtree[pos].l = l;
	segtree[pos].r = r;
	segtree[pos].sum = 0;
	segtree[pos].len = 0;
	if(l == r){
		return;
	}
	int mid = l+(r-l)/2;
	build(l,mid,pos*2);
	build(mid+1,r,pos*2+1);
}

void update(int L,int R,int c,int pos){
	int l = segtree[pos].l;
	int r = segtree[pos].r;
	if(r+1<=L||l>=R){
		return;
	}
	if(L<=l && R>=r+1){
		segtree[pos].sum += c;
		change(pos);
		return;
	}
	update(L,R,c,pos*2);
	update(L,R,c,pos*2+1);
	change(pos);
}

struct inputarr{
	int l,r,w;
	bool operator <(const inputarr &a) const{
		return w < a.w;
	}
};

int main(){
	int n,m;
	cin >> n >> m;
	inputarr arr[n+1];
	int l,r,w;
	for(int i = 1;i <= n;i++){
		cin >> l >> r >> w;
		arr[i] = {l,r,w};
	}
	sort(arr+1,arr+n+1);
	l = 1,r = 0;
	build(1,m,1);
	int ans = 1e9;
	while(l <= n && r <= n){
		while(segtree[1].len+1 < m && r <= n){
			r++;
			if(r > n){
				break;
			}
			update(arr[r].l,arr[r].r,1,1);
		}
		if(r > n){
			break;
		}
		ans = min(ans,arr[r].w - arr[l].w);
		update(arr[l].l,arr[l].r,-1,1);
		l++;
	}
	cout << ans << endl;
}
