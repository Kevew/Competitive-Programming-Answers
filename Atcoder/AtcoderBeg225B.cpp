#include <bits/stdc++.h>
using namespace std;

map<int,int> cnt;

int main(){
	int n;
	cin >> n;
	int a,b;
	bool ans = false;
	for(int i = 0;i < n-1;i++){
		cin >> a >> b;
		cnt[a]++;
		cnt[b]++;
		if(cnt[a] == n-1){
			ans = true;
		}
		if(cnt[b] == n-1){
			ans = true;
		}
	}
	if(ans){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
