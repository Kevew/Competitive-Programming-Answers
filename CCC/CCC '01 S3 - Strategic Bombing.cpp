#include <bits/stdc++.h>
using namespace std;

map<char,vector<char>> check;
bool beenhere[26];

bool reachable = false;

void dfs(char currentposition){
	if(currentposition == 'B'){
		reachable = true;
	}
	if(beenhere[currentposition-'A'] == false){
		beenhere[currentposition-'A'] = true;
		for(int j = 0;j < check[currentposition].size();j++){
			dfs(check[currentposition][j]);
		}
	}
}

int main(){
	vector<string> ans;
	string a;
	cin >> a;
	while(a != "**"){
		ans.push_back(a);
		cin >> a;
	}
	
	for(int i = 0;i < ans.size();i++){
		check[ans[i][0]].push_back(ans[i][1]);
		check[ans[i][1]].push_back(ans[i][0]);
	}
	long long deleted = 0;
	
	for(int i = 0;i < ans.size();i++){
		char f = ans[i][0];
		char s = ans[i][1];
		for(int j = 0;j < check[f].size();j++){
			if(s == check[f][j]){
				check[f].erase(check[f].begin()+j);
				break;
			}
		}
		
		for(int j = 0;j < check[s].size();j++){
			if(f == check[s][j]){
				check[s].erase(check[s].begin()+j);
				break;
			}
		}
	
		
		reachable = false;
		for(int j = 0;j < 26;j++){
			beenhere[j] = false;
		}
		dfs('A');
		
		if(!reachable){
			cout << ans[i] << endl;
			deleted++;
		}
		
		check[f].push_back(s);
		check[s].push_back(f);
	}
	cout << "There are " << deleted << " disconnecting roads." << endl;
}
