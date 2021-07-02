#include <bits/stdc++.h>
using namespace std;

int arr[26][27][27];

void solve(){
	for(int i = 0;i < 26;i++){
		for(int j = 0;j < 27;j++){
			for(int x = 0;x < 27;x++){
				arr[i][j][x] = -1;
			}
		}
	}
	int n;
	cin >> n;
	string a;
	cin >> a;
	for(int i = 0;i < n;i++){
		arr[a[i]-'a'][0][0] = 1;
		if(i+1 < n){
			arr[a[i]-'a'][a[i+1]-'a'+1][0] = 1;
		}
		if(i+2 < n){
			arr[a[i]-'a'][a[i+1]-'a'+1][a[i+2]-'a'+1] = 1;
		}
	}
	for(int i = 0;i < 26;i++){
		if(arr[i][0][0] == -1){
			char ans = 'a'+i;
			cout << ans << endl;
			return;
		}
	}
	for(int i= 0;i < 26;i++){
		for(int j = 1;j < 27;j++){
			if(arr[i][j][0] == -1){
				string ans = "";
				ans += ('a'+i);
				ans += ('a'+j-1);
				cout << ans << endl;
				return;
			}
		}
	}
	
	for(int i= 0;i < 26;i++){
		for(int j = 1;j < 27;j++){
			for(int x = 1;x < 27;x++){
				if(arr[i][j][x] == -1){
					string ans = "";
					ans += ('a'+i);
					ans += ('a'+j-1);
					ans += ('a'+x-1);
					cout << ans << endl;
					return;
				}
			}
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
