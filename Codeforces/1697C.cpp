#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	for(int i = 0;i < n;i++){
		if(b[i] == 'b' && a[i] != b[i]){
			if(a[i] == 'c'){
				int j = i;
				do{
					while(true){
						while(a[j] != 'b' && j >= 0){
							if(a[j] == 'a'){
								cout << "NO" << endl;
								return;
							} 
							j--;
						}
						if(j == -1){
							cout << "NO" << endl;
							return;
						}
						if(b[j] == 'b'){
							j--;
							continue;
						}else{
							swap(a[j],a[i]);
							i++;
							break;
						}
					}
				}while(b[i] == 'b' && a[i] == 'c');
				i--;
			}else if(a[i] == 'a'){
				int j = i;
				do{
					while(a[j] != 'b' && j < n){
						if(a[j] == 'c'){
							cout << "NO" << endl;
							return;
						}
						j++;
					}
					if(j == n){
						cout << "NO" << endl;
						return;
					}
					swap(a[j],a[i]);
					i++;
				}while(b[i] == 'b' && a[i] == 'a');
				i--;
			}
		}
	}
	if(a == b){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
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
/*
1
6
bbcabb
cbbbba
*/
