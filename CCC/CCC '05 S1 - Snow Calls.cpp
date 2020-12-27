#include <bits/stdc++.h>
using namespace std;

char num[36] = {'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','7','7','7','8','8','8','9','9','9','9'};

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		string ans = "";
		for(int i = 0;i < a.size();i++){
			if(a[i] == '-'){
				continue;
			}else{
				if(a[i] < 58){
					ans += a[i];
				}else{
					ans += num[a[i]-'A'];
				}
			}
		}
		for(int i = 0;i < 10;i++){
			if(i == 3 || i == 6){
				cout << "-";
			}
			cout << ans[i];
		}
		cout << endl;
	}
}
