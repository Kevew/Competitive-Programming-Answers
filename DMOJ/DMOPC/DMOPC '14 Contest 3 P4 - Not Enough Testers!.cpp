#include <bits/stdc++.h>
using namespace std;

int fact[100010];
vector<int> arr[100010];

void factors(){
	for(int i = 1;i < 100010;i++){
		for(int j = i;j <= 100010;j+=i){
			fact[j]++;
		}
		arr[fact[i]].push_back(i);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	factors();
	int t;
	cin >> t;
	while(t--){
		int K,A,B;
		cin >> K >> A >> B;
		int first = upper_bound(arr[K].begin(), arr[K].end(), A - 1) - arr[K].begin();
		int second = upper_bound(arr[K].begin(), arr[K].end(), B) - arr[K].begin();
		cout << second-first << "\n";
	}
}
