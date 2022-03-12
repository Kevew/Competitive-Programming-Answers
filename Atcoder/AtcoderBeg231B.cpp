#include <bits/stdc++.h>
using namespace std;

map<string,int> arr;

int main(){
	int n;
	cin >> n;
	int ans = 0;
	string stringans = "";
	for(int i = 0;i < n;i++){
		string a;
		cin >> a;
		arr[a]++;
		if(ans < arr[a]){
			ans = arr[a];
			stringans = a;
		}
	}
	cout << stringans << endl;
}
