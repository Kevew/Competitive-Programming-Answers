#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    long long c[n];
    for(int i = 0;i < n;i++){
        cin >> c[i];
    }
    long long res = 0;
    for(int i = 0;i < n;i+=2){
        long long mn = c[i];
        long long curr = c[i];
        for(int j = i+1;j < n;j++){
            if(j%2 == 0) {
                curr += c[j];
            }else{
                long long l = max(0LL,curr-c[j]);
                long long r = min({mn,curr-1,c[i]-1});
                if(l <= r){
                    res += r-l+1;
                }
                curr -= c[j];
                mn = min(mn, curr);
            }
        }
    }
    cout << res << endl;
}
