#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct node{
	int x,y;
}q[N];

int c[N],fa[N];

int find(int x){
	if(x==fa[x])return x;
	return fa[x]=find(fa[x]);
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		fa[i] = i;
	}
	for(int i = 1;i <= m;i++){
		cin >> q[i].x >> q[i].y;
	}
	
	for(int i = 1;i <= n;i++){
		cin >> c[i];
	}
	
	for(int i = 1;i <= m;i++){
		int x = q[i].x,y = q[i].y;
		if(c[x] != c[y]){
			if(find(x) != find(y)){
				fa[find(x)] = find(y);
			}
		}
	}
	for(int i = 1;i <= m;i++){
		int x = q[i].x;
		int y = q[i].y;	
		if(c[x]==c[y] && find(x) == find(y)){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
