#include <bits/stdc++.h>
using namespace std;

vector<int> restriction[100010];

struct DSU{
    vector<int> arr;
    DSU(int n){
    	arr.resize(n);
        for(int i = 0; i < n; i++){
            arr[i] = i;
        }
    }

    int find(int i) {
        return arr[i] == i ? i : arr[i] = find(arr[i]);
    }

    bool merge(int a, int b) {
        a = find(a), b = find(b);
        arr[a] = b;
    }
    bool same(int a,int b){
    	return find(a) == find(b);
	}
};

void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		restriction[i].clear();
	}
	int a,b,c;
	for(int i = 0;i < m;i++){
		cin >> a >> b >> c;
		restriction[a].push_back(c);
		restriction[c].push_back(a);
	}
	
	DSU arr(n);
	for(int i = 1;i <= n;i++){
		for(int j = 0;j < restriction[i].size();j++){
			if(restriction[i][j] > i){
				cout << restriction[i][j] << " " << i << endl;
				arr.merge(restriction[i][j],i);
			}
		}
		if(restriction[i].size() == 0){
			if(i == 1){
				cout << 1 << " " << i << endl;
				arr.merge(1,i);
			}else{
				cout << 2 << " " << i << endl;
				arr.merge(2,i);
			}
		}
	}
	for(int i = 1;i <= n;i++){
		if(i == 1){
			if(arr.same(i,2)){
				
			}
		}else{
			
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


