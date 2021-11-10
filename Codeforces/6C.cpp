#include <bits/stdc++.h>
using namespace std;

int arr[100010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
 	
 	int l = 0,r = n-1;
 	int x = 0,y = 0;
 	while(l!=r+1){
		if(x<=y){
			x+=arr[l++];
		}else{
			y+=arr[r--];
		}
	}
	cout << l << " " << n-l << endl;
}
