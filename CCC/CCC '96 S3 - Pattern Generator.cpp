#include <bits/stdc++.h>
using namespace std;

void out(int a,int b,string output){
	if(a == 0){
		cout << output << endl;
	}else if(b == 0){
		out(a-1,b,output+"0");
	}else{
		out(a-1,b-1,output+"1");
		if(a != b){
			out(a-1,b,output+"0");
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		cout << "The bit patterns are" << endl;
		out(a,b,"");
	}
}
