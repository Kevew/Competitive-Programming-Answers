#include <bits/stdc++.h>
using namespace std;

int main(){
	string n,m;
	cin >> n >> m;
	if(n.size() == 1){
		n.insert(0,"0");
	}
	if(m.size() == 1){
		m.insert(0,"0");
	}
	while(true){
		string a = n;
		string b = m;
		char c = b[0];
		b[0] = a[1];
		a[1] = c;
		if(stoi(a) <= 23 && stoi(b) <= 59){
			break;
		}else{
			m[1] +=	1;
			if(m[1] == ':'){
				m[0] += 1;
				m[1] = '0';
				if(m[0] == '6'){
					m[0] = '0';
					n[1] += 1;
					if(n[1] == ':'){
						n[1] = '0';
						n[0]++;
					}else if(n[1] == '4' && n[0] == '2'){
						n = "00";
					}
				}
			}
		}
	}
	cout << n << " " << m << endl;
}
