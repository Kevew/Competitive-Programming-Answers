#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x,y;
	cin >> x >> y;
	int temp = m-y2;
	long long ans = 1e16;
	if(temp >= y){
		cout << "0" << endl;
		return;
	}else{
		if(temp+y1 >= y){
			temp = y-temp;
			ans = min(ans,1LL*temp);
		}
	}
	temp = x1;
	if(temp >= x){
		cout << "0" << endl;
		return;
	}else{
		if(temp+(n-x2) >= x){
			temp = x-temp;
			ans = min(ans,1LL*temp);
		}
	}
	temp = y1;
	if(temp >= y){
		cout << "0" << endl;
		return;
	}else{
		if(temp+(m-y2) >= y){
			temp = y-temp;
			ans = min(ans,1LL*temp);
		}
	}
	
	temp = n-x2;
	if(temp >= x){
		cout << "0" << endl;
		return;
	}else{
		if(temp+x1 >= x){
			temp = x-temp;
			ans = min(ans,1LL*temp);
		}
	}
	if(ans != 1e16){
		cout << ans << endl;
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
