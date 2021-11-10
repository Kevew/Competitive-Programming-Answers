#include <bits/stdc++.h>
using namespace std;

int arr[30][30];

long long possible[30][30];

void dfs(int curr,int value,int org){
	if(possible[org][curr] > value){
		possible[org][curr] = value;
		for(int i = 0;i < 26;i++){
			if(arr[curr][i] != INT_MAX){
				dfs(i,value+arr[curr][i],org);
			}
		}
	}
}

int main(){
	for(int i = 0;i < 26;i++){
		for(int j = 0;j < 26;j++){
			arr[i][j] = INT_MAX;
			possible[i][j] = INT_MAX;
		}
	}
	string a,b;
	cin >> a >> b;
	int n;
	cin >> n;
	char x,y;
	int score;
	for(int i = 0;i < n;i++){
		cin >> x >> y >> score;
		arr[x-'a'][y-'a'] = min(arr[x-'a'][y-'a'],score);
	}
	for(int i = 0;i < 26;i++){
		dfs(i,0,i);
	}
	if(a.size() != b.size()){
		cout << "-1" << endl;
		return 0;
	}
	int ans = 0;
	string stringans = "";
	char add;
	int dist = INT_MAX;
	for(int i = 0;i < a.size();i++){
		for(int j = 0;j < 26;j++){
			if(possible[a[i]-'a'][j]+possible[b[i]-'a'][j] < dist){
				dist = possible[a[i]-'a'][j]+possible[b[i]-'a'][j];
				add = (char)('a'+j);
			}
		}
		if(dist == INT_MAX){
			cout << "-1" << endl;
			return 0;
		}
		ans += dist;
		if(dist == possible[a[i]-'a'][b[i]-'a']){
			stringans += add;
		}else{
			stringans += add;
		}
		dist = INT_MAX;
	}
	cout << ans << endl;
	cout << stringans << endl;
}

