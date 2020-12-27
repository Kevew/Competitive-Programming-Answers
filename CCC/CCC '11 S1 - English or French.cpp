#include <bits/stdc++.h>
using namespace std;
//More efficent way would be to use a map

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int s = 0,t = 0;
	int N;
	cin >> N;
	cin.ignore();
	string a;
	while(N--){
		getline(cin,a);
		for(int i = 0;i < a.size();i++){
			if(a[i] == 's' || a[i] == 'S'){
				s++;
			}else if(a[i] == 't' || a[i] == 'T'){
				t++;
			}
		}
	}
	if(s < t){
		cout << "English" << endl;
	}else{
		cout << "French" << endl;
	}
}
