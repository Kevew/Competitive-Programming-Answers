#include <bits/stdc++.h>
using namespace std;

string board[8];

int main(){
	int ans = 0;
	for(int i = 0;i < 8;i++){
		cin >> board[i];
		if(board[i] == "BBBBBBBB"){
			ans++;
		}
	}
	for(int i = 0;i < 8;i++){
		int check = 0;
		for(int j = 0;j < 8;j++){
			if(board[j][i] == 'B'){
				check++;
			}
		}
		if(check == 8){
			ans++;
		}
	}
	if(ans == 16){
		ans = 8;
	}
	cout << ans << endl;
}
