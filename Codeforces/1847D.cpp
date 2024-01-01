#include <bits/stdc++.h>
using namespace std;

int parent[200010];
int dsize[200010];

void make_set(int v) {
    parent[v] = v;
    dsize[v] = 1;
}

int find_set(int v){
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}

void union_sets(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a != b){
        if(dsize[a] < dsize[b]){
        	swap(a, b);
		}
        parent[b] = a;
        dsize[a] += dsize[b];
    }
}

int main(){
	
}
