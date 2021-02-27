#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	double x,y,z;
	cin >> x >> y >> z;
	
	int x = x-a;
	int y = y-b;
	int z = z-c;
	
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
