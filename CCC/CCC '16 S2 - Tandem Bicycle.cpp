#include <bits/stdc++.h>
using namespace std;

int arr1[110];
int arr2[110];

int main(){
	int q;
	cin >> q;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr1[i];
	}
	for(int i = 0;i < n;i++){
		cin >> arr2[i];
	}
	sort(arr1,arr1+n);
	sort(arr2,arr2+n);
	int ans = 0;
	if(q == 1){
		for(int i = 0;i < n;i++){
			ans += max(arr1[i],arr2[i]);
		}
	}else{
		for(int i = 0;i < n;i++){
			ans += max(arr1[n-i-1],arr2[i]);
		}
	}
	cout << ans << endl;
}
