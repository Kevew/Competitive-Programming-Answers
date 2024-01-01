#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,q;
	cin >> n >> k >> q;
	vector<bool> arr(n+1);
	map<int,int> pos;
	for(int i = 0;i < k;i++){
		int a;
		cin >> a;
		arr[a] = true;
		pos[i+1] = a;
	}
	
	for(int i = 0;i < q;i++){
		int l;
		cin >> l;
		if(pos[l] != n){
			if(arr[pos[l]+1] == false){
				arr[pos[l]+1] = true;
				arr[pos[l]] = false;
				pos[l]++;
			}
		}
	}
	for(int i = 0;i < k;i++){
		cout << pos[i+1] << " ";
	}
}
