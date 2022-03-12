#include <bits/stdc++.h>
using namespace std;

map<int,int> cnt;

int main(){
	int n,m;
	cin >> n >> m;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		cnt[a]++;
	}
	
	bool work = true;
	for(int i = 0;i < m;i++){
		cin >> a;
		if(cnt[a] > 0){
			cnt[a]--;
		}else{
			work = false;
		}
	}
	if(work){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
