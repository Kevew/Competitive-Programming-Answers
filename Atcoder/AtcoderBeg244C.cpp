#include <bits/stdc++.h>
using namespace std;

map<int,bool> check;

int main(){
	int n;
	cin >> n;
	set<int> ans;
	for(int i = 1;i <= (n*2)+1;i++){
		ans.insert(i);
	}
	
	while(!ans.empty()){
		auto i = ans.begin();
		while(check[(*i)]){
			ans.erase(i);
			i = ans.begin();
		}
		cout << *i << endl;
		check[*i] = true;
		ans.erase(i);
		int temp;
		cin >> temp;
		check[temp] = true;
		if(temp == 0){
			break;
		}
	}
}
