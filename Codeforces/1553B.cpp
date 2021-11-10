#include <bits/stdc++.h>
using namespace std;

string a,b;
bool ans = false;

void check(int pos,int index,int direction){
	if(index == b.size()){
		ans = true;
		return;
	}
	if(direction == 1 && pos+1 < a.size() && a[pos+1] == b[index]){
		check(pos+1,index+1,1);
	}
	if(direction == 1 && pos-1 >= 0 && a[pos-1] == b[index]){
		check(pos-1,index+1,0);
	}
	if(direction == 0 && pos-1 >= 0 && a[pos-1] == b[index]){
		check(pos-1,index+1,0);
	}
}

void solve(){
	ans = false;
	cin >> a >> b;
	for(int i = 0;i < a.size();i++){
		if(a[i] == b[0]){
			check(i,1,1);
			if(ans){
				break;
			}
		}
	}
	if(!ans){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
