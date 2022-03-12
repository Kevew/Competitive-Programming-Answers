#include <bits/stdc++.h>
using namespace std;

vector<int> arr[500010];
int ans[500010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	int z = 0;
	while(q--){
		int a;
		cin >> a;
		if(a == 1){
			int b;
			cin >> b;
			arr[b].push_back(z);
			z++;
		}else{
			int b,c;
			cin >> b >> c;
			if(b == c){
				continue;
			}
			if(arr[b].size() > arr[c].size()){
				swap(arr[b],arr[c]);
			}
			arr[c].insert(arr[c].end(),arr[b].begin(),arr[b].end());
			arr[b].erase(arr[b].begin(),arr[b].end());
		}
	}
	for(int i = 0;i < 500010;i++){
		for(int j = 0;j < arr[i].size();j++){
			ans[arr[i][j]] = i;
		}
	}
	for(int i = 0;i < z;i++){
		cout << ans[i] << " ";
	}
}
