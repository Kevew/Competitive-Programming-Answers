#include <bits/stdc++.h>
using namespace std;

void solve(){
	string arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	
	char ans = '-';
	for(int i = 0;i < 3;i++){
		if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != '.'){
			ans = arr[i][0];
		}
	}
	
	for(int i = 0;i < 3;i++){
		if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != '.'){
			ans = arr[0][i];
		}
	}
	
	if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != '.'){
		ans = arr[0][0];
	}
	
	if(arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2] && arr[1][1] != '.'){
		ans = arr[1][1];
	}
	if(ans == '-'){
		cout << "DRAW" << endl;
	}else{
		cout << ans << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
