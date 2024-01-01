#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n == 0){
		cout << "1" << endl;
	}else{
		int ans = 1;
		for(int i = 1;i <= n;i++){
			ans *= i;
		}
		cout << ans << endl;
	}
}
