#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int cnt = 0;
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(i > 0){
			if(a[i] == a[i-1]){
				cnt++;
			}else{
				if(cnt%2 == 0){
					cnt = 1;
				}else{
					int j;
					for(j = i+1;j < n;j++){
						if(a[j] != a[j-1]){
							break;
						}
					}
					j--;
					if(cnt >= j-i+1){
						if(ans >= 1 && cnt == 1 && j == n-1){
							a[i-1] = a[i];
							cnt = 2;
							ans++;
							continue;
						}
						a[i] = a[i-1];
						cnt = 0;
					}else{
						a[i-1] = a[i];
						cnt = 2;
					}
					ans++;
				}
			}
		}else{
			cnt++;
		}
	}
	if(cnt%2 == 1){
		int j;
		for(j = n-2;j >= 0;j--){
			if(a[j] != a[j+1]){
				break;
			}
		}
		int i = j;
		j--;
		for(;j >= 0;j--){
			if(a[j] != a[j+1]){
				break;
			}
		}
		j++;
		
		if(cnt >= i-j+1){
			a[i+1] = a[i];
		}else{
			a[i] = a[i+1];
		}
		ans++;
	}
	cout << ans << " ";
	cnt = 1;
	for(int i = 0;i < n;i++){
		if(i > 0 && a[i] != a[i-1]){
			cnt++;
		}
	}
	cout << cnt << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

/*
1
12
101011111000
*/
