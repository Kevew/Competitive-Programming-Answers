#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	pair<int,int> pos1,pos2;
	bool first = false;
	for(int i = 0;i < n;i++){
		string a;
		cin >> a;
		for(int j = 0;j < m;j++){
			if(a[j] == 'o'){
				if(!first){
					pos1 = {i,j};
					first = true;
				}else{
					pos2 = {i,j};
				}
			}
		}
	}
	cout << abs(pos1.first-pos2.first) + abs(pos1.second-pos2.second) << endl;
}
