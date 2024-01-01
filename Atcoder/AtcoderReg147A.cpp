#include <bits/stdc++.h>
using namespace std;

int arr[200010];

int main(){
	int n;
	cin >> n;
	multiset<int> check;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		check.insert(arr[i]);
	}
	int cnt = 0;
	while(check.size() > 1){
		int a = *check.begin();
		int b = *check.rbegin();
		auto itr = check.find(b);
		check.erase(itr);
		b %= a;
		if(b != 0){
			check.insert(b);
		}
		cnt++;
	}
	
	cout << cnt << endl;
	
}
