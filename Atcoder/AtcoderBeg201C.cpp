#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int ans = 0;
	for(int i = 0;i < 10000;i++){
    	vector<int> a(10);
    	int x = i;
    	for(int j=0; j<4; j++){
      		int d = x%10;
      		a[d] = 1;
      		x /= 10;
    	}
    	bool check = true;
    	for(int i = 0;i < 10;i++){
      		if(s[i] == 'o' && a[i] != 1) check = false;
      		if(s[i] == 'x' && a[i] != 0) check = false;
    	}
    	if(check){
    		ans++;
		}
  	}
  	cout << ans << endl;
	
}
