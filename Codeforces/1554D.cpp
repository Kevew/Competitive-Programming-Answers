#include<bits/stdc++.h>
using namespace std;

int main() {
  	ios_base::sync_with_stdio(0);
  	cin.tie(0);
  	int t;
	cin >> t;
  	while(t--){
    	int n;
		cin >> n;
    	if(n == 1){
    	  	cout << "a" << endl;
    	}else{
    	  	cout << string(n / 2, 'a') + (n & 1 ? "bc" : "b") + string(n / 2 - 1, 'a') << endl;
    	}
  	}
}
