// Kevin Wei
#include <bits/stdc++.h>
using namespace std;

int arr1[10010],arr2[10010];

int main(){
	int a;
	cin >> a;
	for(int i = 0;i < a+1;i++){
		cin >> arr1[i];
	}
	if(a == 0){
		cout << 0 << endl;
		return 0;
	}
	double ans = 0;
	for(int i = 0;i < a;i++){
		cin >> arr2[i];
		ans += (double)(arr2[i]*(arr1[i]+arr1[i+1]))/2;
	}
	cout << fixed << setprecision(1);
	cout << ans << endl;
}
