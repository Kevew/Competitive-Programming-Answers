#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		bool arr[32010];
		bool arr1[32010];
		memset(arr,0,sizeof(arr));
		memset(arr1,0,sizeof(arr1));
		bool ans = false;
		for(int i = 1;i < sqrt(a);i++){
			if(a/i != i && (a/i)*i == a){
				arr[(a/i)-i] = true;
				arr1[(a/i)+i] = true;
				if(arr[(a/i)-i] == true && arr1[(a/i)-i] == true){
					ans = true;
					break;
				}
				if(arr[(a/i)+i] == true && arr1[(a/i)+i] == true){
					ans = true;
					break;
				}
			}
		}
		if(ans){
			cout << a << " is nasty" << endl;
		}else{
			cout << a << " is not nasty" << endl;
		}
	}
}
