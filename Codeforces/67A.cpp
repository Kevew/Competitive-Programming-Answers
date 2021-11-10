#include <bits/stdc++.h>
using namespace std;

int arr[1010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a;
	cin >> a;
	int prev = 1;
	arr[0] = 1;
	if(a[0] == 'L'){
		arr[0] = 2;
	}
	for(int i = 1;i < n;i++){
		arr[i] = 1;
		if(a[i-1] == 'R'){
			arr[i] = arr[i-1]+1;
		}else if(a[i-1] == '='){
			arr[i] = arr[i-1];
		}
	}
	
	for(int i = n-2;i >= 0;i--){
		if(a[i] == 'L'){
			arr[i] = max(arr[i],arr[i+1]+1);
		}else if(a[i] == '='){
			arr[i] = max(arr[i],arr[i+1]);
		}
	}
	
	for(int i = 0;i < n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
