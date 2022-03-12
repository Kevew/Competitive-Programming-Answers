#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	int b;
	cin >> a >> b;
	int n = a.size();
	int l = 0,r = 0;
	long long ans = 0,curr = 0,temp = 0;
	while(l < a.size() && r < a.size()){
		while(temp <= b && r < a.size()){
			if(a[r] == '.'){
				if(temp+1 > b){
					break;
				}
				temp++;
			}
			curr++;
			r++;
		}
		ans = max(ans,curr);
		while(temp >= b && l < a.size()){
			if(a[l] == '.'){
				temp--;
			}
			curr--;
			l++;
		}
	}
	cout << ans << endl;
}
