#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		char c;
		int n1 = 0, n2 = 0;
		int i = 0;
		while((c = getchar()) != '\n'){
			if (i % 2) {
				n1 *= 10;
				n1 += c - '0';
			} else {
				n2 *= 10;
				n2 += c - '0';
			}
			i++;
		}
		cout << (n1+1)*(n2+1)-2 << endl;
	}
	return 0;
}
