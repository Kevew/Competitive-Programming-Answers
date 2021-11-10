#include <bits/stdc++.h>
using namespace std;

int main(){
	double r,x,y;
	cin >> r >> x >> y;
	double dist = sqrt(x*x+y*y);
	if(dist < r){
		cout << "2" << endl;
		return 0;
	}
	int ans = ceil(dist/r);
	cout << ans << endl;
}
