#include <bits/stdc++.h>
using namespace std;

string arr[6] = {"abc","acb","bac","bca","cab","cba"};
int ans[6][200010];

int main(){
	int n,m;
	cin >> n >> m;
	string a;
	cin >> a;
	for(int i = 1;i <= n;i++){
		for(int j = 0;j < 6;j++){
			ans[j][i] = ans[j][i-1]+(a[i-1] != arr[j][i%3]);
		}
	}
	
	
	int l,r;
	for(int i = 0;i < m;i++){
		cin >> l >> r;
		int answer = 1e9;
		for(int j = 0;j < 6;j++){
			answer = min(answer,ans[j][r]-ans[j][l-1]);
		}
		cout << answer << endl;
	}
}
