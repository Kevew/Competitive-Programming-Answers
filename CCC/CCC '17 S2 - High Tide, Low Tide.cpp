#include <bits/stdc++.h>
using namespace std;

int arr[110];

int main(){
	int a;
	cin >> a;
	for(int i = 0;i < a;i++){
		cin >> arr[i];
	}
	sort(arr,arr+a);
	if(a%2 == 0){
		int x = a/2,y = (a/2)+1;
		for(;x >= 0 && y <= a;){
			cout << arr[x-1] << " " << arr[y-1] << " ";
			x--;
			y++;
		}
	}else{
		cout << arr[a/2] << " ";
		int x = a/2,y = (a/2)+2;
		for(;x >= 0 && y <= a;){
			cout << arr[y-1] << " " << arr[x-1] << " ";
			x--;
			y++;
		}
	}
}
