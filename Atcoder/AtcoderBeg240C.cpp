#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	bitset<100010> check;
	check[0] = 1;
	int a,b;
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		check = (check<<b)|(check<<a);
	}
	if(check[m]){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
