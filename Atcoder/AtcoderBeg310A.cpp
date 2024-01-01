#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,q;
	cin >> n >> m >> q;
	int minimum = 1e9;
	for(int i = 0;i < n;i++){
		int a;
		cin >> a;
		minimum = min(minimum,a);
	}
	cout << min(m,q+minimum) << endl;
}
