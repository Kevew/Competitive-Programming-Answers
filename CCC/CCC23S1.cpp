#include <bits/stdc++.h>
using namespace std;

int toparr[250000];
int bottemarr[250000];

int main(){
	int n;
	cin >> n;
	int ans = 0;	
	for(int i = 0;i < n;i++){
		cin >> toparr[i];
		if(toparr[i] == 1){
			ans += 3;
		}
	}
	for(int i = 0;i < n;i++){
		cin >> bottemarr[i];
		if(bottemarr[i] == 1){
			ans += 3;
		}
	}
	
	for(int i = 0;i < n;i++){
		if(toparr[i] == 1){
			if(i < n - 1 && toparr[i+1] == 1){
				ans -= 2;
			}
			if(i%2 == 0 && bottemarr[i] == 1){
				ans -= 2;
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		if(bottemarr[i] == 1){
			if(i < n-1 && bottemarr[i+1] == 1){
				ans -= 2;
			}
		}
	}
	cout << ans << endl;
}
