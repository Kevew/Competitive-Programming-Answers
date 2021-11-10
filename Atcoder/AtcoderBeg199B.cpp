#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int maximum = 0,temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		maximum = max(maximum,temp);
	}
	int minimum = 1e9;
	for(int i = 0;i < n;i++){
		cin >> temp;
		minimum = min(minimum,temp);
	}
	cout << max(0,minimum-maximum+1) << endl;
}
