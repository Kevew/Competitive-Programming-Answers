#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	bool ca = false;
	bool cb = false;
	bool cc = false;
	bool firstTime = false;
	for(int i = 0;i < n;i++){
		char a;
		cin >> a;
		if(a == 'A'){
			ca = true;
		}else if(a == 'B'){
			cb = true;
		}else if(a == 'C'){
			cc = true;
		}
		if(cc && cb && ca && !firstTime){
			cout << i+1 << endl;
			firstTime = true;
		}
	}
}
