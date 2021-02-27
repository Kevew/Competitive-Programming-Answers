#include <bits/stdc++.h>
using namespace std;

int xr,yr,xj,yj;

bool between(int test,int a,int b){
	return (test >= a && test <= b) || (test <= a && test >= b);
}

bool check(int x1,int y1,int x2,int y2){
	double m1,m2,yint1,yint2,xi,yi;
	if(xr == xj){
		m1 = 999999999;
		yint1 = 0;
	}else{
		m1 = (double)(yr-yj)/(double)(xr-xj);
		yint1 = -m1*xj+yj;
	}
	if(x1 == x2){
		m2 = 999999999;
		yint2 = 0;
	}else{
		m2 = (double)(y1-y2)/(double)(x1-x2);
		yint2 = -m2*x2+y2;
	}
	
	if(m1 == m2){
		if(m1 != 999999999 && m2 != 999999999){
			return yint1 == yint2 && (between(x1,xr,xj) || between(x2,xr,xj));
		}else{
			return xr == x1 && (between(y1,yr,yj) || between(y2,yr,yj));
		}
	}else{
		if(m1 != 999999999 && m2 != 999999999){
			xi = (yint2-yint1)/(m1-m2);
			yi = m1*xi+yint1;
		}else{
			if(m1 == 999999999){
				xi = xr;
				yi = m2*xi+yint2;
			}else{
				xi = x1;
				yi = m1*xi+yint1;
			}
		}
		return between(xi,xr,xj) && between(xi,x1,x2) && between(yi,y1,y2) && between(yi,yr,yj);
	}
}

int main(){
	cin >> xr >> yr >> xj >> yj;
	int t;
	cin >> t;
	int cnt = 0;
	for(int i = 0;i < t;i++){
		bool touching = false;
		int n;
		cin >> n;
		int x0,y0;
		cin >> x0 >> y0;
		int x1 = x0;
		int y1 = y0;
		for(int j = 1;j < n;j++){
			int x2,y2;
			cin >> x2 >> y2;
			touching = touching || check(x1,y1,x2,y2);
			x1 = x2;
			y1 = y2;
		}
		touching = touching || check(x1,y1,x0,y0);
		if(touching){
			cnt++;
		}
	}
	cout << cnt << endl;
}
