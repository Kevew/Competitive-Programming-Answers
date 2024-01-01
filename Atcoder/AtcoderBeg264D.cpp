#include <bits/stdc++.h>
using namespace std;
 
string a,b;
 
void solve(){
	b = "atcoder";
    int n = 7;
    int i = 0;
    
    int ans = 0;
    while(i < n){
        if(a[i] == b[i]){
            i = i + 1;
            continue;
        }
        int pos = 8;
        for(int j = i+1;j < n;j++){
        	if(a[j] == b[i]){
        		pos = j;
        		break;
			}
		}
		for(int j = pos;j > i;j--){
			swap(a[j],a[j-1]);
			ans++;
		}
		i++;
    }
    cout << ans << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin >> a;
    solve();
}
