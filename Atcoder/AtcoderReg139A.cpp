#include <bits/stdc++.h>
using namespace std;

long long arr[100010];

int main(){
	long long n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long start = (1LL<<arr[0]);
	for(int i = 1;i < n;i++){
		if(arr[i] < arr[i-1]){
			start += (1LL<<arr[i]);
		}else if(arr[i] == arr[i-1]){
			if(start&(1LL<<arr[i])){
				start += (1LL<<arr[i]);
				start += (1LL<<arr[i]);
			}else{
				start += (1LL<<arr[i]);
			}
		}else{
			for(int j = 0;j < arr[i];j++){
				if(start&(1LL<<j)){
					start -= (1LL<<j);
				}
			}
			if(start&(1LL<<arr[i])){
				start += (1LL<<arr[i]);
				start += (1LL<<arr[i]);
			}else{
				start += (1LL<<arr[i]);
			}
		}
	}
	cout << start << endl;
}
