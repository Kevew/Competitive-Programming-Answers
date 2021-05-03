#include <bits/stdc++.h>
using namespace std;

char temp;
int mirror[10] = {0,1,5,-1,-1,2,-1,-1,8,-1};
int ab,ba;

bool check(int hour,int minute){
	int a = mirror[hour/10];
	int b = mirror[hour%10];
	int c = mirror[minute/10];
	int d = mirror[minute%10];
	if(a == -1 || b == -1 || c == -1 || d == -1){
		return false;
	}
	if(b*10+a >= ba){
		return false;
	}else if(d*10+c >= ab){
		return false;
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> ab >> ba;
		int h,m;
		cin >> h >> temp >> m;
		while(!check(h,m)){
			h = (h+(m+1)/ba)%ab;
			m = (m+1)%ba;
		}
		cout << h/10 << h%10 << ":" << m/10 << m%10 << endl;
	}
}
