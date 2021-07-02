#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n%2 == 1){
			cout << "Bob" << endl;
			continue;
		}
		int test = 0;
		while(n%2 == 0){
			test++;
			n /= 2;
		}
		
		if(n > 1){
			cout << "Alice" << endl;
		}else if(test%2 == 0){
			cout << "Alice" << endl;
		}else{
			cout << "Bob" << endl;
		}
	}
}
