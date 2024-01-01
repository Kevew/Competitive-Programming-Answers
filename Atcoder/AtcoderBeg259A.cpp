#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,x,t,d;
	cin >> n >> m >> x >> t >> d;
	if(n > m){
		while(n > m){
			if(n <= x){
				t -= d;
			}
			n--;
		}
	}else if(n < m){
		while(n < m){
			if(n < x){
				t += d;
			}
			n++;
		}
	}
	
	cout << t << endl;
}
