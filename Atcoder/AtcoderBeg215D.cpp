#include <bits/stdc++.h>
using namespace std;

int ans[100010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	int a;
	set<int> check;
	for(int i = 0;i < n;i++){
		cin >> a;
		while(a%2 == 0){
			check.insert(2);
			a /= 2;
		}
		for(int j = 3;j <= sqrt(a);j+=2){
			while(a%j == 0){
				check.insert(j);
				a /= j;
			}
		}
		if(a > 2){
			check.insert(a);
		}
	}
	for(auto i: check){
		for(int j = i;j <= m;j+=i){
			ans[j] = true;
		}
	}
	vector<int> temp;
	for(int i = 1;i <= m;i++){
		if(!ans[i]){
			temp.push_back(i);
		}
	}
	
	cout << temp.size() << endl;
	for(int i = 0;i < temp.size();i++){
		cout << temp[i] << endl;
	}
}
