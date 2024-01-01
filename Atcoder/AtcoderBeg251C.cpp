#include <bits/stdc++.h>
using namespace std;

map<string,bool> occur;

int main(){
	int n;
	cin >> n;
	string a;
	int b;
	vector<pair<int,int>> check;
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		if(!occur[a]){
			occur[a] = true;
			check.push_back({b,i});
		}
	}
	sort(check.begin(),check.end());
	int i;
	for(i = check.size()-2;i >= 0;i--){
		if(check[i].first != check[i+1].first){
			break;
		}
	}
	cout << check[i+1].second << endl;
}
