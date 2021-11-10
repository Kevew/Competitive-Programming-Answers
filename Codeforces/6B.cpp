#include <bits/stdc++.h>
using namespace std;

char arr[110][110];

int main(){
	int a,b;
	char pres;
	cin >> a >> b >> pres;
	for(int i = 0;i < a;i++){
		for(int j = 0;j < b;j++){
			cin >> arr[i][j];
		}
	}
	set<char> ans;
	for(int i = 0;i < a;i++){
		for(int j = 0;j < b;j++){
			if(arr[i][j] == pres){
				if(i > 0 && arr[i-1][j] != pres && arr[i-1][j] != '.'){
					ans.insert(arr[i-1][j]);
				}
				if(i+1 < a && arr[i+1][j] != pres && arr[i+1][j] != '.'){
					ans.insert(arr[i+1][j]);
				}
				if(j > 0 && arr[i][j-1] != pres && arr[i][j-1] != '.'){
					ans.insert(arr[i][j-1]);
				}
				if(j+1 < b && arr[i][j+1] != pres && arr[i][j+1] != '.'){
					ans.insert(arr[i][j+1]);
				}
			}
		}
	}
	cout << ans.size() << endl;
}
