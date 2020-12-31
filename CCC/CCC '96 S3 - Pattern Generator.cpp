#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		cout << "The bit patterns are" << endl;
		int ans[a];
		for(int i = 0;i < b;i++){
			ans[i] = 1;
		}
		for(int i = b;i < a;i++){
			ans[i] = 0;
		}
		next_permutation(ans,ans+a);
		vector<vector<int>> printout;
		do{
			vector<int> temp;
			for(int i = 0;i < a;i++){
				cout << ans[i];
			}
			cout << endl;
		}while(next_permutation(ans,ans+a));
		cout << endl;
	}
}
