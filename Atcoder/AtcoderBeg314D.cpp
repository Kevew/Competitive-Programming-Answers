#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int m;
	cin >> m;
	pair<int,pair<int,char>> arr[m+1];
	int lastC = -1;
	for(int i = 0;i < m;i++){
		int a,b;
		char c;
		cin >> a >> b >> c;
		arr[i] = make_pair(a,make_pair(b,c));
		if(a == 2 || a == 3){
			lastC = i;
		}
	}
	
	for(int i = 0;i < m;i++){
		if(i == lastC){
			if(arr[i].first == 2){
				for(auto & c: s){
					c = tolower(c);
				}
			}else{
				for(auto & c: s){
					c = toupper(c);
				}
			}
		}else{
			if(arr[i].first != 1){
				continue;
			}
			s[arr[i].second.first-1] = arr[i].second.second;
		}
	}
	cout << s << endl;
}
