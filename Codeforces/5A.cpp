#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	int total = 0;
	int ans = 0;
	while(getline(cin,a)){
		if(a[0] == '+'){
			total++;
		}else if(a[0] == '-'){
			total--;
		}else{
			int add = 0;
			for(int i = a.size()-1;i >= 0;i--){
				if(a[i] == ':'){
					break;
				}
				add++;
			}
			ans += total * add;
		}
	}
	cout << ans << endl;
}
