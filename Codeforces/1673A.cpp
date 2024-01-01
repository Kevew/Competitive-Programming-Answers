#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	cin >> a;
	int n = a.size();
	if(n == 1){
		cout << "Bob " << (a[0]-'a')+1 << endl;
	}else{
		cout << "Alice ";
		long long temp = 0;
		if(n%2 == 0){
			for(int i = 0;i < n;i++){
				temp += (a[i]-'a')+1;
			}
		}else{
			for(int i = 1;i < n-1;i++){
				temp += (a[i]-'a')+1;
			}
			if(a[0] > a[n-1]){
				temp += (a[0]-'a')+1;
				temp -= (a[n-1]-'a')+1;
			}else{
				temp += (a[n-1]-'a')+1;
				temp -= (a[0]-'a')+1;
			}
		}
		cout << temp << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
