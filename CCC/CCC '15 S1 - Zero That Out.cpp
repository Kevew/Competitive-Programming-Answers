#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr;
	int t;
	cin >> t;
	int temp;
	while(t--){
		cin >> temp;
		if(temp != 0){
			arr.push_back(temp);
		}else{
			arr.erase(arr.begin()+arr.size()-1);
		}
	}
	int ans = 0;
	for(int i = 0;i < arr.size();i++){
		ans += arr[i];
	}
	cout << ans << endl;
	
}
