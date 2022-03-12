#include <bits/stdc++.h>
using namespace std;

int arr[100010];

int main(){
	int n;
	cin >> n;
	long long ans = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(arr[i]-1 != i){
			
		}
	}
	reverse(arr,arr+n);
	long long temp;
	for(int i = 0;i < n;i++){
		temp += (arr[i]-i-1);
	}
	cout << min(temp,ans) << endl;
}

//move back + revese = revese starting the number of moved back
/*
1 3 2 4
4 3 2 1
3 2 4 1
1 4 2 3
2 4 1 3
3 1 4 2
4 1 3 2
2 3 1 4
1 3 2 4
4 2 3 1
*/
