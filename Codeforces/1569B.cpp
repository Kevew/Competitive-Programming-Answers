#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int cnt = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == '2'){
			cnt++;
		}
	}
	a += a;
	if(cnt == 0 || cnt >= 3){
		cout << "YES" << endl;
		int curr = 0;
		int arr[3];
		for(int i = 0;i < n;i++){
			if(a[i] == '2'){
				arr[curr] = i;
				curr++;
				if(curr == 3){
					break;
				}
			}
		}
		for(int i = 0;i < n;i++){
			string ans = "";
			for(int j = 0;j < n;j++){
				if(a[i] == '1'){
					if(i == j){
						ans += "X";
					}else{
						ans += "=";
					}
				}else{
					if(i == j){
						ans += "X";
					}else if(a[j] == '1'){
						ans += "=";
					}else if(i == arr[0] || i == arr[1] || i == arr[2]){
						ans += "-";
					}else{
						if(j < i){
							ans += "+";
						}else{
							ans += "-";
						}
					}
				}
			}
			if(arr[0] == i && a[i] == '2'){
				ans[arr[1]] = '+';
			}else if(arr[1] == i && a[i] == '2'){
				ans[arr[2]] = '+';
			}else if(arr[2] == i && a[i] == '2'){
				ans[arr[0]] = '+';
			}
			cout << ans << endl;
		}
		
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

