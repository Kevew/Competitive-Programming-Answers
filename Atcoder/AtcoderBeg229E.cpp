#include <bits/stdc++.h>
using namespace std;

vector<int> edges[200010];
bool activated[200010];
int parent[200010];
int sizearr[200010];

int find_set(int v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}

bool union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if(a != b){
    	if(sizearr[a] < sizearr[b]){
        	swap(a, b);
		}
    	parent[b] = a;
        sizearr[a] += sizearr[b];
    	return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		sizearr[i+1] = 1;
		parent[i+1] = i+1;
	}
	for(int i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	vector<int> arr;
	long long curr = 0;
	for(int i = n;i > 0;i--){
		arr.push_back(curr);
		activated[i] = true;
		curr++;
		bool check = false;
		for(auto j: edges[i]){
			if(activated[j]){
				if(union_sets(i,j)){
					curr--;
				}
			}
		}
	}
	for(int i = arr.size()-1;i >= 0;i--){
		cout << arr[i] << endl;
	}
}
