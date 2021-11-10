#include<bits/stdc++.h>
using namespace std;

int x;

int main(){
	int t;
	cin>>t;
	while(t--){
		cin >> x;
		if(x/11 >= 10*(x%11)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
