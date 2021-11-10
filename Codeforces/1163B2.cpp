#include <bits/stdc++.h>
using namespace std;

map<int,int> a;
map<int,int> b;

int main(){
	int n;
	cin >> n;
	int ans = 1,x;
	for(int i = 0;i < n;i++){
		cin >> x;
		a[x]++;
		b[a[x]]++;
		if(a[x]*b[a[x]] == i+1 && i+1 != n){
			ans = i+2;
		}else if(a[x]*b[a[x]] == i){
			ans = i+1;
		}
	}
	cout << ans << endl;
}
