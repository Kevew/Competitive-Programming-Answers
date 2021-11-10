#include <bits/stdc++.h>
using namespace std;
int n,x,t[100001],b;

int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> x;
		x -= min(i,n-i+1);
		if(x >= 0){
			t[x]++;
			b=max(b,t[x]);
		}
	}
	cout << n-b << endl;
	return 0;
}
