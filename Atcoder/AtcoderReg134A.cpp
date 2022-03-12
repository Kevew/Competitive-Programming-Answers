#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,l,w;
	cin >> n >> l >> w;
	vector<long long> arr;
	arr.push_back(0);
	long long temp;
	for(long long i = 0;i < n;i++){
		cin >> temp;
		arr.push_back(temp);
	}
	arr.push_back(l);
	long long ans = 0;
	for(int i = 1;i <= n+1;i++){
		if(i == 1){
			temp = arr[i]-arr[i-1];
			ans += ((temp+w-1)/w);
		}else{
			temp = arr[i-1]+w;
			temp = arr[i]-temp;
			ans += max((temp+w-1)/w,0LL);
		}
	}
	cout << ans << endl;
}
