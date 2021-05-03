#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		string b;
		cin >> b;
		if(b[0] == '0' || b[a-1] == '0'){
			cout << "NO" << endl;
			continue;
		}
		int ones = 0;
		for(int i = 0;i < a;i++){
			if(b[i] == '1'){
				ones++;
			}
		}
		if(ones%2 == 1){
			cout << "NO" << endl;
			continue;
		}
		int prev = 0;
		string ansA = b,ansB = b;
		for(int i = 0;i < a;i++){
			if(b[i] == '1'){
				prev++;
				if(prev <= ones/2){
					ansA[i] = '(';
					ansB[i] = '(';
				}else{
					ansA[i] = ')';
					ansB[i] = ')';
				}
			}else{
				if((i-prev)%2 == 0){
					ansA[i] = '(';
					ansB[i] = ')';
				}else{
					ansB[i] = '(';
					ansA[i] = ')';
				}
			}
		}
		cout << "YES\n" << ansA << "\n" << ansB << "\n";
	}
}
