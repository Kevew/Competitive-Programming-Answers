#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int curr = 0;
	int i = 0;
	for(i = 1;i <= n;i++){
		if(curr >= n){
			break;
		}
		curr += i;
	}
	cout << i-1 << endl;
}
