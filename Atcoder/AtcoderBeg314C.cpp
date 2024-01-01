#include <bits/stdc++.h>
using namespace std;

map<int,int> pos;

int main(){
	pos.clear();
	int n,m;
	cin >> n >> m;
	string s;
	cin >> s;
	string colorS[m];
	for(int i = 0;i < m;i++){
		colorS[i] = "";
	}
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		colorS[arr[i]-1] += s[i];
	}
	for(int i = 0;i < m;i++){
		int sizeS = colorS[i].size();
		string firstpart = colorS[i].substr(0,sizeS-1);
		char secondpart = colorS[i][sizeS-1];
		colorS[i] = secondpart + firstpart;
	}
	for(int i = 0;i < n;i++){
		cout << colorS[arr[i]-1][pos[arr[i]]];
		pos[arr[i]]++;
	}
}
