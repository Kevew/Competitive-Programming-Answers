#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,r,b;
	cin >> n >> r >> b;
	vector<int> arr(b+1,0);
	for(int i = 0;i < r;i++){
		arr[i%(b+1)]++;
	}
	for(int i = 0;i < b+1;i++){
		for(int j = 0;j < arr[i];j++){
			cout << "R";
		}
		if(i < b){
			cout << "B";
		}
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
