#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	string a;
	cin >> a;
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == 'U'){
			k = max(k-1,0);
		}else if(a[i] == 'D'){
			k++;
		}
		if(k == 0){
			ans++;
		}
	}
	cout << ans << endl;
}
