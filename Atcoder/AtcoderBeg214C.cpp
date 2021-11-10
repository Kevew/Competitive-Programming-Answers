#include <bits/stdc++.h>
using namespace std;

long long arr[200010],timer[200010],prevt[200010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(int i = 0;i < n;i++){
		cin >> timer[i];
	}
	for(int i = 0;i <= n;i++){
		prevt[i] = 1e18;
	}
	
	for(int i = 0;i < n;i++){
		if(i == 0){
			prevt[i] = min(prevt[i],prevt[n-1]+arr[n-1]);
			prevt[i] = min(prevt[i],timer[i]);
		}else{
			prevt[i] = min(prevt[i-1]+arr[i-1],timer[i]);
		}
	}
	for(int i = 0;i < n;i++){
		if(i == 0){
			prevt[i] = min(prevt[i],prevt[n-1]+arr[n-1]);
			prevt[i] = min(prevt[i],timer[i]);
		}else{
			prevt[i] = min(prevt[i-1]+arr[i-1],timer[i]);
		}
		cout << prevt[i] << endl;
	}
}

