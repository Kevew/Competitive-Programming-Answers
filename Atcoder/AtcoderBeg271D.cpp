#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,s;
	cin >> n >> s;
	vector<int> arr1(n);
	vector<int> arr2(n);
	for(int i = 0;i < n;i++){
		cin >> arr1[i] >> arr2[i];
	}
	set<int> arr;
	map<int,string> check;
	arr.insert(0);
	for(int i = 0;i < n;i++){
		set<int> temp;
		map<int,string> check2;
		for(auto j: arr){
			temp.insert(j+arr1[i]);
			check2[j+arr1[i]] = check[j]+"H";
		}
		for(auto j: arr){
			temp.insert(j+arr2[i]);
			check2[j+arr2[i]] = check[j]+"T";
		}
		arr = temp;
		check = check2;
	}
	bool flag = false;
	for(auto i: arr){
		if(i == s){
			flag = true;
		}
	}
	if(flag){
		cout << "Yes" << endl;
		cout << check[s] << endl;
	}else{
		cout << "No" << endl;
	}
}
