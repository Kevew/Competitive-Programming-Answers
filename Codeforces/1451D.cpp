#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a,b;
	cin >> a >> b;
	long long curr1 = 0,curr2 = 0;
	while(true){
		if(curr1 <= curr2 && ((curr1+b)*(curr1+b))+(curr2*curr2) <= a*a){
			curr1 += b;
		}else if(curr1 > curr2 && (curr1*curr1)+((curr2+b)*(curr2+b)) <= a*a){
			curr2 += b;
		}else{
			break;
		}
	}
	
	if(curr1 == curr2){
		cout << "Utkarsh" << endl;
	}else{
		cout << "Ashish" << endl;
	}
}

long long main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
