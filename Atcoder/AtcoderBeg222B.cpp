#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,p;
	cin >> n >> p;
	int a,ans = 0;
	for(int i = 0;i < n;i++){
		cin >> a;
		if(a < p){
			ans++;
		}
	}
	cout << ans << endl;
}
