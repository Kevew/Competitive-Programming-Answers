#include <bits/stdc++.h>
using namespace std;

string subtrack(string a,char p){
	bool counter = false;
	
	int i = a.size()-1;
	int temp = a[i]-p;
	if(temp < 0){
		a[i] = '9'-abs(temp)+1;
		counter = true;
	}else{
		a[i] = '0'+(a[i]-p);
	}
	i--;
	while(counter == true){
		if(a[i] == '0'){
			counter = true;
			a[i] = '9';
		}else if(a[i] == '1' && i == 0){
			a.erase(a.begin());
			counter = false;
		}else{
			a[i]--;
			counter = false;
		}
		i--;
	}
	return a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		string oria = a;
		cout << a << endl;
		while(a.size() > 2){
			a = subtrack(a.substr(0,a.size()-1),a[a.size()-1]);
			cout << a << endl;
		}
		
		if(a == "11"){
			cout << "The number " << oria << " is divisible by 11." << endl;
		}else if(a[0] == a[1]){
			cout << "The number " << oria << " is divisible by 11." << endl;
		}else{
			cout << "The number " << oria << " is not divisible by 11." << endl;
		}
		if(t != 0){
			cout << endl;
		}
	}
}
