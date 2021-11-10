#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	int thirdelement = 0;
	int temp,ans = INT_MAX;
	int pa = a,pb = b,pc = c;
	for(int i = 1;i <= 2*a;i++){
		for(int j = i;j <= 2*b;j+=i){
			for(int x = 0;x < 2;x++){
				thirdelement = j*(c/j) + x*j;
				temp = abs(i-a) + abs(j-b) + abs(thirdelement-c);
				if(ans > temp){
					ans = temp;
					pa = i;
					pb = j;
					pc = thirdelement;
				}
			}
		}
	}
	cout << ans << endl;
	cout << pa << " " << pb << " " << pc << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
