#include <bits/stdc++.h>
using namespace std;

map<int,bool> reached;

int main(){
	int a,b;
	cin >> a >> b;
	for(int i = 1;i < sqrt(b+1);i++){
		reached[i*i] = true;
	}
	int ans = 0;
	for(int i = 1;i < sqrt(b+1);i++){
		if(reached[i*i*i] && i*i*i <= b && i*i*i >= a){
			ans++;
		}
	}
	cout << ans << endl;
}
