#include <bits/stdc++.h>
using namespace std;

map<string,int> n,m;

int main(){
	int a = 0,b = 0;
	string s;
	while(cin >> s){
		int f = 0;
		while(true){
			int x = s.find_last_of("\\");
			if(x == 2){
				break;
			}
			s = s.substr(0,x);
			int temp = n[s];
			m[s] += f;
			n[s]++;
			a = max(a,m[s]);
			b = max(b,n[s]);
			if(!temp){
				f++;
			}
		}
	}
	cout << a << " " << b << endl;
}
