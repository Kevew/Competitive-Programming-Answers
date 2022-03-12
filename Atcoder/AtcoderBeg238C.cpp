#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;
 
long long n, a[20];
void init(){
    a[0] = 1;
    for (int i = 1; i <= 18; i++)
        a[i] = a[i - 1] * 10;
}
 
long long cal(){
	cin >> n;
    long long ans = 0;
    for(int i = 18;i >= 0;i--){
        if(n >= a[i]){
            long long x = n - a[i] + 1;
            n -= x;
            if (x % 2 == 0)
                ans += (x / 2 % mod) * ((x + 1) % mod) % mod;
            else
                ans += ((x + 1) / 2 % mod) * (x % mod) % mod;
        }
    }
    return ans % mod;
}
 
int main(){
    init();
    cout << cal() << endl;
}
