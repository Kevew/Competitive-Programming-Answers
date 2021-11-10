#include <bits/stdc++.h>
using namespace std;

int arr[100010][27],arr2[100010][27];

void solve(){
	memset(arr,0,sizeof(arr));
	memset(arr2,0,sizeof(arr2));
	int n,m;
	cin >> n >> m;
	string s;
	for(int i = 0;i < n;i++){
		cin >> s;
		for(int j = 0;j < m;j++){
			arr[j][s[j]-'a']++;
		}
	}
	
	for(int i = 0;i < n-1;i++){
		cin >> s;
		for(int j = 0;j < m;j++){
			arr2[j][s[j]-'a']++;
		}
	}
	for(int i = 0;i < m;i++){
		for(int j = 0;j < 26;j++){
			if(arr[i][j] != arr2[i][j]){
				cout << (char)('a'+j);
				break;
			}
		}
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

