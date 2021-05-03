#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	string a;
	cin >> a;
	int total = n+m;
	if(n%2 == 1 && m%2 == 1){
		cout << "-1" << endl;
		return;
	}
	if((n%2==1 || m%2 == 1) && total%2 == 0){
		cout << "-1" << endl;
		return;
	}
	if(total%2 == 1){
		if(a[total/2] == '?'){
			if(n%2==1){
				a[total/2] = '0';
			}else if(m%2==1){
				a[total/2] = '1';
			}
		}
	}
	for(int i = 0;i < total;i++){
		if(a[i] == '1'){
			m--;
		}else if(a[i] == '0'){
			n--;
		}
	}
	for(int i = 0;i < (total/2);i++){
		if(a[i] == '?' && a[total-i-1] != '?'){
			if(a[total-i-1] == '1'){
				m--;
				a[i] = '1';
			}else{
				n--;
				a[i] = '0';
			}
		}else if(a[i] != '?' && a[total-i-1] == '?'){
			if(a[i] == '1'){
				m--;
				a[total-i-1] = '1';
			}else{
				n--;
				a[total-i-1] = '0';
			}
		}
	}
	
	for(int i = 0;i < (total/2);i++){
		if(a[i] == '?' && a[total-i-1] == '?'){
			if(m > n){
				m -= 2;
				a[i] = '1';
				a[total-i-1] = '1';
			}else{
				n -= 2;
				a[i] = '0';
				a[total-i-1] = '0';
			}
		}
		if(a[i] != a[total-i-1]){
			cout << "-1" << endl;
			return;
		}
	}
	if(n == 0 && m == 0){
		cout << a << endl;
	}else{
		cout << "-1" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
