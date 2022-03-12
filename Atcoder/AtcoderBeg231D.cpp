#include <bits/stdc++.h>
using namespace std;

int parent[100010];
int size_arr[100010];

int find_set(int v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (size_arr[a] < size_arr[b])
            swap(a, b);
        parent[b] = a;
        size_arr[a] += size_arr[b];
    }
}

map<int,int> arr;

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i <= n;i++){
		size_arr[i] = 1;
		parent[i] = i;
	}
	
	for(int i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		if(arr[a] == 2 || arr[b] == 2){
			cout << "No" << endl;
			return 0;
		}
		arr[a]++;
		arr[b]++;
		int f = find_set(a);
		int s = find_set(b);
		if(f != s){
			union_sets(a,b);
		}else{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
