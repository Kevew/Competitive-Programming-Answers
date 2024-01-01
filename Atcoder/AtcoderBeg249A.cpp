#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	int d,e,f;
	int g;
	cin >> a >> b >> c >> d >> e >> f >> g;
	int t = 0,aoki = 0;
	t += (g/(a+c))*a*b;
	t += min(g%(a+c),a)*b;
	aoki += (g/(d+f))*e*d;
	aoki += min(g%(f+d),d)*e;
	if(aoki > t){
		cout << "Aoki" << endl;
	}else if(aoki == t){
		cout << "Draw" << endl;
	}else{
		cout << "Takahashi" << endl;
	}
}
