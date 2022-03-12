#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int ans = -1;
	int b;
	bool ignore = false;
	for(int i = 0;i < n;i++){
		cin >> b;
		if(ignore){
			continue;
		}
		if(i == 0){
			ans = b;
		}else{
			if(ans >= b){
				ignore = true;
				continue;
			}
			ans = b;
		}
	}
	cout << ans << endl;
}
