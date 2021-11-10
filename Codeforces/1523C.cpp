#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	vector<long long> arr;
	long long a;
	for(long long i = 0;i < n;i++){
		cin >> a;
		if(a == 1){
			arr.push_back(1);
		}else{
			while(a-1 != arr.back()){
				arr.pop_back();
			}
			arr.back() = a;
		}
		cout << arr[0];
		for(long long j = 1;j < arr.size();j++){
			cout << "." << arr[j];
		}
		cout << endl;
	}
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
