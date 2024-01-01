#include <bits/stdc++.h>
using namespace std;

vector<int> val1;
vector<int> val2;

void solve(){
	int n,k;
	cin >> n >> k;
	if(k >= 46){
		cout << "0" << endl;
	}else{
		int a = val1[k-1];
		int b = val2[k-1];
		int i = 0,ans = 0;
		while(i * a <= n){
			if((n-(i*a))%b == 0){
				if(i <= (n-(i*a))/b){
					ans++;
				}else{
					break;
				}
			}
			i++;
		}
		cout << ans << endl;
	}
}

int main(){
	
	int a1 = 1,a2 = 0;
	int b1 = 0,b2 = 1;
	val1.push_back(1);
	val1.push_back(0);
	val2.push_back(0);
	val2.push_back(1);
	for(int i = 0;i < 45;i++){
		int c1 = a1+b1;
		int c2 = a2+b2;
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		val1.push_back(c1);
		val2.push_back(c2);
	}
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}



/*

a b a+b a+2b 2a+3b 3a+5b 5a+8b

*/
