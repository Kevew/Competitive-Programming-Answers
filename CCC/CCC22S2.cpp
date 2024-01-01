#include <bits/stdc++.h>
using namespace std;

vector<pair<string,string>> check1;
vector<pair<string,string>> check2;


int main(){
	int x,y;
	cin >> x;
	string a,b;
	for(int i = 0;i < x;i++){
		cin >> a >> b;
		check1.push_back({a,b});
	}
	

	cin >> y;
	for(int i = 0;i < y;i++){
		cin >> a >> b;
		check2.push_back({a,b});
	}
	
	
	int g;
	cin >> g;
	
	string temp;
	int ans = 0;
	vector<map<string,bool>> check(g);
	map<string,int> arr;
	for(int i = 0;i < g;i++){
		for(int j = 0;j < 3;j++){
			cin >> a;
			check[i][a] = true;
			arr[a] = i;
		}
	}
	
	for(int i = 0;i < x;i++){
		if(!check[arr[check1[i].first]][check1[i].second]){
			ans++;
		}
	}
	for(int i = 0;i < y;i++){
		if(check[arr[check2[i].first]][check2[i].second]){
			ans++;
		}
	}
	cout << ans << endl;
}
