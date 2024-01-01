#include <bits/stdc++.h>
using namespace std;

int main(){
	set<int> arr;
	for(int i = 0;i < 5;i++){
		int a;
		cin >> a;
		arr.insert(a);
	}
	cout << arr.size() << endl;
}
