#include <bits/stdc++.h>
using namespace std;

pair<int,int> dir[4] = {{1,0},{0,-1},{-1,0},{0,1}};

int main(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int x = 0,y = 0,curr = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == 'S'){
			x += dir[curr].first;
			y += dir[curr].second;
		}else{
			curr++;
			curr %= 4;
		}
	}
	cout << x << " " << y << endl;
}
