#include <bits/stdc++.h>
using namespace std;

int main(){
	int r;
	cin >> r;
	while(r != 0){
		int ans = 0;
		int rad = r * r;
		for (int x = 1 ; x <= r; x++)
		{
			ans += (int)sqrt(rad - (double) x * x) + 1;
		}
		ans *= 4;
		ans += 1;
		cout << ans << endl;
		cin >> r;
	}
}
