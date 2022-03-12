#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s1 = "",s2 = "";
		string a;
		cin >> a;
		for(int i = 0;i < a.size();i++){
			if(i%2 == 0){
				s1 += a[i];
			}else{
				s2 += a[i];
			}
		}
		if(s2.empty()){
			cout << stoi(s1)-1 << endl;
		}else{
			cout << (stoi(s1)+1)*(stoi(s2)+1)-2 << endl;
		}
	}
}
