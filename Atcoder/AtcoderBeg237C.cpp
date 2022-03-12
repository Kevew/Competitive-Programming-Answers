#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	int i = a.size()-1,x = 0;
	while(a[i] == 'a' && a[x] == 'a' && x < i){
		i--;
		x++;
	}
	if(i <= x){
		cout << "Yes" << endl;
		return 0;
	}
	while(a[i] == 'a' && i >= 0){
		i--;
	}
	bool check = true;
	for(int j = 0;j < ((i-x+1)/2);j++){
		if(a[j+x] != a[i-j]){
			check = false;
			break;
		}
	}
	if(check){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}

//aabvba
