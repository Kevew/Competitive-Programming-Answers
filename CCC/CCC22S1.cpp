#include <bits/stdc++.h>
using namespace std;

map<int,int> arr;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int i;
	for(i = 0;i < 20;i++){
		if((n-(i*5))%4 == 0 && n >= (i*5)){
			break;
		}
	}
	if(i == 20){
		cout << "0" << endl;
	}else{
		n -= (i*5);
		cout << (n/4)/5+1 << endl;
	}
	
}
