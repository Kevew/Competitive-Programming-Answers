#include <bits/stdc++.h>
using namespace std;

int arr[10010];

int main(){
	int curr = 1;
	for(int i = 1;i <= 10000;i++){
		if(i%10 == 3 || i%3 == 0){
			continue;
		}
		arr[curr] = i;
		curr++;
	}
	
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		cout << arr[n] << endl;
	}
}
