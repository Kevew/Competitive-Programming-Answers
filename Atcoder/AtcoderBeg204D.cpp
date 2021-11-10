#include <bits/stdc++.h>
using namespace std; 

const int B = 1e5;
bitset<B> f;
 
int main() {
	int n, sum = 0;
	cin >> n;
	f.set(0);
	for(int i = 1; i <= n; i ++) {
		int a;
		cin >> a;
		f |= f << a;
		sum += a;
	}
	int res = 1e9;
	for(int i = f._Find_first(); i < f.size(); i = f._Find_next(i)){
		res = min(res, max(i, sum - i));
	}
	cout << res << endl;
}
