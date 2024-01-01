#include <bits/stdc++.h>
using namespace std;

bool possible[1000010];

int main(){
	for(int i = 2;i <= 1010;i++){
		int j = i+1;
		int temp = i;
		while(j <= 1000000){
			temp *= i;
			j += temp;
			if(j <= 1000000){
				possible[j] = true;
			}
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(possible[n]){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}




/*

2 4 8 16 32 64 128 256
2 6 14 30 62 126 254

3 9 27 81 243
3 12 39 66 147


x + x^2 + x^3 + x^4 ... x^n
x(1 + x + x^2 + x^3 ... x^(n-1))

*/
