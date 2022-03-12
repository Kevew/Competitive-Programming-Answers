#include <bits/stdc++.h>
using namespace std;

long long arr[4][200010];

int sizearr[4];

void solve(){
	long long w,h;
	cin >> w >> h;
	long long a;
	for(int i = 0;i < 4;i++){
		cin >> a;
		for(int j = 0;j < a;j++){
			cin >> arr[i][j];
		}
		sizearr[i] = a;
	}
	long long ans = 0;
	ans = max(ans,(arr[0][sizearr[0]-1]-arr[0][0])*h);
	ans = max(ans,(arr[1][sizearr[1]-1]-arr[1][0])*h);
	ans = max(ans,(arr[2][sizearr[2]-1]-arr[2][0])*w);
	ans = max(ans,(arr[3][sizearr[3]-1]-arr[3][0])*w);
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
