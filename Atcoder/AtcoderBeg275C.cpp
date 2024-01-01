#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<string> arr;
	for(int i = 0;i < 9;i++){
		string a;
		cin >> a;
		arr.push_back(a);
	}
	int ans = 0;
	for(int i = 0;i < 9;i++){
		for(int j = 0;j < 9;j++){
			for(int x = 0;x < 9;x++){
				if(x > i){
					break;
				}
				for(int y = j+1;y < 9;y++){
					int disI = i-x;
					int disJ = y-j;
					if(arr[i][j] == '#' && arr[x][y] == '#'){
						if(x+disJ < 9 && y+disI < 9 && arr[x+disJ][y+disI] == '#'){
							if(i+disJ < 9 && j+disI < 9 && arr[i+disJ][j+disI] == '#'){
								ans++;
							}
						}
					}
				}
			}
		}
	}
	cout << ans << endl;
}
