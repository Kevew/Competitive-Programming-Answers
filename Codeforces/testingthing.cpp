#include <bits/stdc++.h>
using namespace std;


vector<int> val1;
vector<int> val2;
 
int main(){
	int a1 = 1,a2 = 0;
	int b1 = 0,b2 = 1;
	for(int i = 0;i < 32;i++){
		int c1 = a1+b1;
		int c2 = a2+b2;
		cout << c1 << " " << c2 << endl;
		val1.push_back(c1);
		val2.push_back(c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
}
