#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin >> n >> k;
	for(int i = 0;i < k;i++){
		if(n%200 == 0){
			n /= 200;
		}else{
			string temp = to_string(n);
			temp += "200";
			n = stoll(temp);
		}
	}
	cout << n << endl;
}
