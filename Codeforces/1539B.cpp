#include <bits/stdc++.h>
using namespace std;

int arr[100010][30];

int main(){
	int n,m;
	cin >> n >> m;
	char a;
	for(int i = 1;i <= n;i++){
		cin >> a;
		for(int j = 0;j < 26;j++){
			arr[i][j] = arr[i-1][j];
			if(a-'a' == j){
				arr[i][j]++;
			}
		}
		
	}
	int f,s;
	while(m--){
		cin >> f >> s;
		int ans = 0;
		for(int i = 0;i < 26;i++){
			ans += (arr[s][i]-arr[f-1][i])*(i+1);
		}
		cout << ans << endl;
	}
}
