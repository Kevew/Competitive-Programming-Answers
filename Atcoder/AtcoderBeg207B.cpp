#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c,d;
	cin >> a >> b >> c >> d;
	long long f = a,s = 0;
	for(int i = 0;i < a;i++){
		f += b;
		s += c;
		if(f <= s*d){
			cout << i+1 << endl;
			return 0;
		}
	}
	cout << "-1" << endl;
}
