#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int cnt = 0;
	for(int i = 1;i <= a;i++){
		for(int j = 1;j <= b;j++){
			if(abs(c-i) + abs(d-j) == 1){
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}
