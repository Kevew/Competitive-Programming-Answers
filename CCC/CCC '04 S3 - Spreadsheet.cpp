#include <bits/stdc++.h>
using namespace std;

string arr[20][20];
string ans[20][20];
bool visited[20][20];

string check(int y,int x){
	if(ans[y][x][0]-'0' < 10){
		return ans[y][x];
	}
	if(visited[y][x] == true){
		if(arr[y][x][0] > 64){
			return "*";
		}else{
			return arr[y][x];
		}
	}
	
	int temp = 0;
	
	visited[y][x] = true;
	for(int i = 0;i < (arr[y][x].size()/3)+1;i++){
		if(check(arr[y][x][i*3]-'A',arr[y][x][i*3+1]-'1') == "*"){
			return ans[y][x] = "*";
		}else{
			temp += stoi(check(arr[y][x][i*3]-'A',arr[y][x][i*3+1]-'1'));
		}
	}
	
	return ans[y][x] = to_string(temp);
}

int main(){
	for(int i = 0;i < 10;i++){
		for(int j = 0;j < 9;j++){
			cin >> arr[i][j];
			ans[i][j] = arr[i][j];
		}
	}
	
	for(int i = 0;i < 10;i++){
		for(int j = 0;j < 9;j++){
			if(arr[i][j][0] > 64){
				ans[i][j] = check(i,j);
			}
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	
}

