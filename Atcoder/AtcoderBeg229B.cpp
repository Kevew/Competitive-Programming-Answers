#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	if(b.size() > a.size()){
		swap(a,b);
	}
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i = 0;i < b.size();i++){
		if(b[i]-'0' + a[i]-'0' >= 10){
			cout << "Hard" << endl;
			return 0;
		}
	}
	cout << "Easy" << endl;
	return 0;
}
