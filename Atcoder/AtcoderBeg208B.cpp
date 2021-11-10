#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 10*9*8*7*6*5*4*3*2;
	int p;
	cin >> p;
	int ans = 0,next = 10;
	while(p != 0){
		while(p >= n){
			p -= n;
			ans++;
		}
		n /= next;
		next--;
	}
	cout << ans << endl;
}
