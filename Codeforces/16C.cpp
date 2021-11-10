#include <bits/stdc++.h>
using namespace std;

long long gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long a,b,x,y;
	cin >> a >> b >> x >> y;
	int gcded = gcd(x,y);
	x /= gcded;
	y /= gcded;
	if(x > a || y > b){
		cout << "0 0" << endl;
		return 0;
	}
	long long temp = min(a/x,b/y);
	cout << temp*x << " " << temp*y << endl;
}
