#include <bits/stdc++.h>
using namespace std;
 
int main(){
  	int n;
  	cin >> n;
  	vector<string> s(n),t(n);
  	for(int i = 0;i < n;i++){
  		cin >> s[i];
	}
  	for(int i = 0;i < n;i++){
  		cin >> t[i];
	}
 
  	auto rot = [&](vector<string> a) {
    	vector<string> res(n, string(n, '.'));
    	for(int i = 0;i < n;i++){
    		for(int j = 0;j < n;j++){
    			res[j][n-1-i] = a[i][j];
			}
		}
    	return res;
  	};
 
 	auto normalize = [&](vector<string> a) {
    	int li = n, lj = n;
    	for(int i = 0;i < n;i++){
    		for(int j = 0;j < n;j++){
    			if (a[i][j] == '#') {
      				li = min(li, i);
      				lj = min(lj, j);
    			}
			}
		}
    	vector<string> res(n, string(n, '.'));
    	for(int i = 0;i < n;i++){
    		for(int j = 0;j < n;j++){
    			if (a[i][j] == '#') {
    				res[i-li][j-lj] = '#';
    			}
			}
		}
    	return res;
  	};
  	auto same = [&](vector<string> a, vector<string> b){
    	return normalize(a) == normalize(b);
  	};
  
  	for(int i = 0;i < 4;i++){
    	if(same(s, t)){
      		cout << "Yes" << endl;
      		return 0;
    	}
    	t = rot(t);
  	}
  	cout << "No" << endl;
}
