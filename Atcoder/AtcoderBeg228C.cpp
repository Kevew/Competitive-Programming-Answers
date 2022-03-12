#include <bits/stdc++.h>
using namespace std;

int arr[100010],sorted[100010];

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		int a,b,c;
		cin >> a >> b >> c;
		arr[i] = a+b+c;
		sorted[i] = arr[i];
	}
	sort(sorted,sorted+n);
	for(int i = 0;i < n;i++){
		int temp = sorted[n-k];
		if(300+arr[i] >= temp){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}
