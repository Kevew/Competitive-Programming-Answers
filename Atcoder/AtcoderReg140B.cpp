#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int one = 0,two = 0;
	bool allowOdd = false;
	for(int i = 0;i < n-1;i++){
		if(a[i] == 'R'){
			if(i > 0){
				if(a[i-1] == 'A' && a[i+1] == 'C'){
					if(i-1 > 0 && i+2 < n){
						if(a[i-2] == 'A' && a[i+2] == 'C'){
							two++;
						}else{
							one++;
						}
					}else{
						one++;
					}
				}
			}
		}
	}
	cout << one+two*2 << endl;
}
