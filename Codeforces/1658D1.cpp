#include <bits/stdc++.h>
using namespace std;

int arr[200010];

void solve(){
	int L, R; cin >> L >> R;
    int cnt[17];
	for(int i = 0;i < 17;i++) cnt[i] = 0;
    for(int i = 0;i < R+1;i++){
        int X; cin >> X;
        for(int j = 0;j < 17;j++) {
            if (X & (1 << j)) cnt[j]++;
        }
    }
    int ans = 0;
    for(int i = 0;i < 17;i++) {
        if(cnt[i] * 2 >= R+1) ans += 1 << i;
    }
    cout << ans << endl;
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
0 5
1 0 3 2 5 4
0001
0000
0011
0010
0101
0100
*/
