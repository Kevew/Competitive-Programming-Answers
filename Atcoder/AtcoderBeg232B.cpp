#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	int diff = abs(b[0]-a[0]);
	if(b[0] < a[0]){
		diff = ('z'-a[0]) + b[0]-'a'+1;
	}
	for(int i = 0;i < a.size();i++){
		if(b[i]-a[i] != diff){
			if(('z'-a[i])+b[i]-'a'+1 == diff){
				continue;
			}
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
