#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a,k,temp;
	multiset<int> arr;
	for(int i = 0;i < n;i++){
		cin >> temp >> a;
		if(temp == 1){
			arr.insert(a);
		}else if(temp == 2){
			int k = 0;
			auto j = arr.upper_bound(a);
			cin >> k;
			k--;
			auto temp = arr.begin();
			while(arr.begin() != j && k > 0){
				temp++;
				k--;
			}
			if(k == 0){
				cout << *temp << endl;
			}else{
				cout << "-1" << endl;
			}
		}else{
			int k = 0;
			auto j = arr.upper_bound(a);
			cin >> k;
			k--;
			while(j != arr.end() && k > 0){
				j++;
				k--;
			}
			if(k == 0){
				cout << *j << endl;
			}else{
				cout << "-1" << endl;
			}
		}
	}
}
