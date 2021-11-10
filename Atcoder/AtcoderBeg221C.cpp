#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	sort(a.begin(),a.end());
	string f = "0",s = "0";
	for(int i = a.size()-1;i >= 0;i--){
		if(stoll(f) > stoll(s)){
			s += a[i];
		}else{
			f += a[i];
		}
	}
	long long fi = stoll(f),si = stoll(s);
	cout << fi*si << endl;
}
