#include <bits/stdc++.h>
using namespace std;

int arr[200010];
int check[200010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		int a = abs(arr[i]-i);
		if(a <= 1){
			if(arr[i]-i == -1){
				check[n-2]++;
			}else if(arr[i]-i == 0){
				check[n-1]++;
			}else{
				check[0]++;
			}
		}else{
			if(arr[i] < i){
				arr[i] += n;
			}
			check[arr[i]-i-1]++;
		}
	}
	int curr = 0;
	for(int i = 0;i < 3;i++){
		curr += check[i];
	}
	int ans = curr;
	for(int i = 0;i < n;i++){
		curr -= check[i];
		curr += check[(i+3)%n];
		ans = max(curr,ans);
	}
	cout << ans << endl;
}
