#include <bits/stdc++.h>
using namespace std;

map<int,int> cnt;

int main(){
	int n;
	cin >> n;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		cnt[a]++;
		if(cnt[a] == 2){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
