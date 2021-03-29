#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr;
	int n;
	cin >> n;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(),arr.end());
	
	if(n%2 == 0){
		cout << ceil((arr[(n/2)-1]+arr[(n/2)])/2.0)<< endl;
	}else{
		cout << arr[n/2] << endl;
	}	
}
