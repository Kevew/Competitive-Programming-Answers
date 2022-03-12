#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

int main(){
	long long h,w,k;
	cin >> h >> w >> k;
	long long x1,x2,y1,y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	long long noton = 0,on1 = 0,on2 = 0,equal = 0;
	long long i = 0;
	if(x1 == x2 && y1 == y2){
		equal = 1;
	}else if(x1 == x2){
		on1 = 1;
	}else if(y1 == y2){
		on2 = 1;
	}else{
		noton = 1;
	}
	for(;i < k;i++){
		long long temp2 = on1;
		long long temp4 = on2;
		long long temp = noton;
		long long temp3 = equal;
		on1 = 0;
		on2 = 0;
		on1 = (on1+((w-1)%MOD*temp3)%MOD)%MOD;
		on2 = (on2+((h-1)%MOD*temp3)%MOD)%MOD;
		on1 = (on1+((w-2)%MOD*temp2)%MOD)%MOD;
		on2 = (on2+((h-2)%MOD*temp4)%MOD)%MOD;
		on1 = (on1+temp)%MOD;
		on2 = (on2+temp)%MOD;
		equal = 0;
		equal = (equal+temp2)%MOD;
		equal = (equal+temp4)%MOD;
		noton = 0;
		noton = (noton + (temp*(h-2+w-2)%MOD)%MOD)%MOD;
		noton = (noton + (temp2*(h-1)%MOD)%MOD)%MOD;
		noton = (noton + (temp4*(w-1)%MOD)%MOD)%MOD;
	}
	cout << equal << endl;
}
