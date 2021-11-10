#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double mn = 1e9,mx = 0;
	cin >> n;
	double test;
	for(int i = 1;i <= n;i++) {
		cin >> test;
		mn = min(mn,(test+1-1e-8)/i);
		mx = max(mx,test/i);
	}
	n++;
	int low = (int)(n*mx);
	int high = (int)(n*mn+1);
	if(low+1==high){
		cout << "unique" << endl << low << endl;
	}
	else{
		cout << "not unique" << endl;
	}
}
