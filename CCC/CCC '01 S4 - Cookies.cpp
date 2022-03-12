#include <bits/stdc++.h>
using namespace std;

long double x[11];
long double y[11];

//Heron's Algorithm

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> x[i];
		cin >> y[i];
	}
	
	long double ans = 0;
	long double a,b,c,s,d;
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			for(int k = j+1;k < n;k++){
				a = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
			    b = sqrt((x[j] - x[k]) * (x[j] - x[k]) + (y[j] - y[k]) * (y[j] - y[k]));
			    c = sqrt((x[k] - x[i]) * (x[k] - x[i]) + (y[k] - y[i]) * (y[k] - y[i]));
			    s = (a + b + c) / 2;
			    d = 0;
			    if((s == 0) || (a * a + b * b - c * c < 0) || (b * b + c * c - a * a < 0) || (c * c + a * a - b * b < 0))
			    {
					d = max(a,max(b,c));
				}
			    else
					d = 2*(a*b*c)/(4*sqrt(s*(s-a)*(s-b)*(s-c)));
			    if (d > ans)
					ans = d;
			}
		}
	}
	cout << ans << endl;
}
