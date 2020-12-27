#include <bits/stdc++.h>
using namespace std;

int p,g,r,o;
int totalreq;

int main(){
	int total = 0,minimum = 999999999;
	cin >> p >> g >> r >> o >> totalreq;
	for(int i = 0;i < o;i++){
		for(int j = 0;j < o;j++){
			for(int k = 0;k < o;k++){
				for(int l = 0;l < o;l++){
					if(i*p+j*g+k*r+l*o == totalreq){
						total++;
						minimum = min(minimum,i+j+k+l);
						cout << "# of PINK is " << i << " # of GREEN is " << j << " # of RED is " << k << " # of ORANGE is " << l << endl;
					}
				}
			}
		}
	}
	cout << "Total combinations is " << total << "." << endl;
	cout << "Minimum number of tickets to print is " << minimum << "." << endl;
}
