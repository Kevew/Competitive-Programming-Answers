#include <bits/stdc++.h>
using namespace std;

int arr[200010];

int main(){
	int n,q;
	cin >> n >> q;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(int i = 0;i < q;i++){
		int b;
		cin >> b;
		auto c = lower_bound(arr,arr+n,b);
		cout << (n-(c-arr)) << endl;
	}
}
