#include <bits/stdc++.h>
using namespace std;

int mn = 1e9+7;
int a[200010],b[200010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	int ans = m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(a[i] != a[0]){
			mn = min(mn,min(i,n-i));
		}
	}
	bool check = false;
	for(int i = 0;i < m;i++){
		cin >> b[i];
		if(!check && b[i] != a[0]){
			check = true;
			ans += mn;
			continue;
		}
		if(i > 0 && b[i] != b[i-1]){
			ans++;
		}
	}
	if(ans > 1e9+2){
		cout << "-1" << endl;
	}else{
		cout << ans << endl;
	}
	
}
