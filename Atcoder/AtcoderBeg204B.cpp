#include <bits/stdc++.h>
using namespace std;

int arr[100010];

int main(){
	int n;
  	cin >> n;
  	for(int i=0;i<n;i++) cin >> arr[i];
  	int ans=0;
  	for(int i=0;i<n;i++){
  	  	if(arr[i]>10)ans+=arr[i]-10;
  	}
  	cout << ans << endl;
}
