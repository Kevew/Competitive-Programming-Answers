#include <bits/stdc++.h>
using namespace std;

long long arr[500000];

long long gcd(long long a,long long b){
	if(b == 0){
		return a;
	}
	return gcd(b, a%b);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	vector<long long> diff;
	for(long long i = 1;i < n;i++){
		long long difference = arr[i]-arr[i-1];
		if(difference != 0){
			diff.push_back(difference);
		}
	}
	long long g = 0;
	for(long long i = 0;i < diff.size();i++){
		g = gcd(g,diff[i]);
		if(g == 1){
			cout << "2" << endl;
			return 0;
		}
	}
	
	cout << "1" << endl;
}
