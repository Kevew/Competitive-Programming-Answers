#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

char check[8] = {'c','h','o','k','u','d','a','i'};
int ans[8];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.size();
	for(int i = 0;i < n;i++){
		for(int j = 0;j < 8;j++){
			if(s[i] == check[j]){
				if(j == 0){
					ans[0]++;
				}else{
					ans[j] = (ans[j-1]+ans[j])%MOD;
				}
				break;
			}
		}
	}
	cout << ans[7] << endl;
}
