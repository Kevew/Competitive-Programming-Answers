#include <bits/stdc++.h>
using namespace std;

map<vector<int>,bool> ans;

int main(){
	int n;
	cin >> n;
	int answer = 0;
	for(int i = 0;i < n;i++){
		vector<int> temp;
		int a,b;
		cin >> a;
		for(int i = 0;i < a;i++){
			cin >> b;
			temp.push_back(b);
		}
		if(!ans[temp]){
			ans[temp] = true;
			answer++;
		}
	}
	cout << answer << endl;
}
