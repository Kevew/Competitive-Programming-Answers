#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	int f = -1,s = -1,total = 0;
	if(a == b){
		cout << "Yes" << endl;
		return 0;
	}
	for(int i = 0;i < a.size()-1;i++){
		swap(a[i],a[i+1]);
		if(a == b){
			cout << "Yes" << endl;
			return 0;
		}
		swap(a[i],a[i+1]);
	}
	cout << "No" << endl;
}
