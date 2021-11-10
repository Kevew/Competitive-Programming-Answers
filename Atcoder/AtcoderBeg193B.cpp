#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int ans = 1e9;
	for(int i = 0;i < n;i++){
		int a,p,x;
		cin >> a >> p >> x;
		if(x-a > 0){
			ans = min(ans,p);
		}
	}
	if(ans == 1e9){
		cout << "-1" << endl;
	}else{
		cout << ans << endl;
	}
}
