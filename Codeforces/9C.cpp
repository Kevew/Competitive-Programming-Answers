#include <bits/stdc++.h>
using namespace std;

int ans = 0,n;

void check(int x){
    if(x>n){
    	return;
	}
    ans++;
    check(10*x);
	check(10*x+1);
}

int main(){
	cin >> n;
	check(1);
	cout << ans << endl;
}
