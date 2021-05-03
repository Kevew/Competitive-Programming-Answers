#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;

int lower,higher;
int n,x,pos;

void binary(){
	int low = 0,high = n;
	while(low < high){
		int middle = (low+high)/2;
		if(middle <= pos){
			low = middle+1;
			higher++;
		}else{
			high = middle;
			lower++;
		}
	}
}

int main(){
	cin >> n >> x >> pos;
	binary();
	long long ans = 1;
	higher--;
	for(int i = 0,j=x-1;i < higher;i++,j--){
		ans = (ans*j)%MOD;
	}
	for(int i = 0,j = n-x;i < lower;i++,j--){
		ans = (ans*j)%MOD;
	}
	for(int i = n-higher-lower-1;i > 0;i--){
		ans = (ans*i)%MOD;
	}
	cout << ans << endl;
}
