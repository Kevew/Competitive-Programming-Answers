#include <bits/stdc++.h>
using namespace std;

int arr[100010];

int main(){
	int a;
	cin >> a;
	int cur = 0,ans = 0,temp;
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		cin >> arr[i];
		cur += arr[i];
		if(i >= 4){
			cur -= arr[i-4];
		}
		if(cur > a){
			break;
		}
		
		ans++;
	}
	
	cout << ans << endl;
}
