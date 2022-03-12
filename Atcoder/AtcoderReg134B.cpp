#include <bits/stdc++.h>
using namespace std;

map<char,vector<int>> pos;

int main(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	for(int i = 0;i < n;i++){
		pos[a[i]].push_back(i);
	}
	
	int lastpos = n;
	for(int i = 0;i < lastpos;i++){
		bool set = false;
		for(int j = 'a';j < a[i];j++){
			if(set){
				break;
			}
			if(pos[j].size() > 0){
				auto x = lower_bound(pos[j].begin(),pos[j].end(),lastpos+1);
				if(x != pos[j].begin() && pos[j][(x-1)-pos[j].begin()] > i){
					x--;
					swap(a[i],a[pos[j][(x)-pos[j].begin()]]);
					lastpos = pos[j][x-pos[j].begin()]-1;
					set = true;
				}
			}
		}
	}
	cout << a << endl;
	
}
