#include <bits/stdc++.h>
using namespace std;

//This will fail 1 of the test cases

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	double xx,yy,zz;
	cin >> xx >> yy >> zz;
	
	double x = xx-a;
	double y = yy-b;
	double z = zz-c;
	
	double ans = x*x + y*y + z*z;
	int temp;
	char dir;
	cin >> temp >> dir;
	while(dir != 'E'){
		if(ans != 0){
			x -= temp;
			if(x * (x+temp) < 0){
				ans = min(ans,y*y + z*z);
			}else{
				ans = min(ans,x*x + y*y + z*z);
			}
			int temp = x;
			if(dir == 'L'){
				x = y;
				y = -temp;
			}else if(dir == 'R'){
				x = -y;
				y = temp;
			}else if(dir == 'U'){
				x = z;
				z = -temp;
			}else{
				x = -z;
				z = temp;
			}
		}
		cin >> temp >> dir;
	}
	cout << fixed;
    cout << setprecision(2);
	cout << sqrt(ans) << endl;
}
