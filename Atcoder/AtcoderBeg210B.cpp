#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	for(int i = 0;i < n;i++){
		if(a[i] == '1'){
			if(i%2 == 0){
				cout << "Takahashi" << endl;
			}else{
				cout << "Aoki" << endl;
			}
			break;
		}
	}
}
