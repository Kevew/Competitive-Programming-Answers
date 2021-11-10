#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		if(i%2 == 1){
			a--;
		}
		m -= a;
	}
	if(m >= 0){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
