#include <bits/stdc++.h>
using namespace std;

bool compare(pair<long double, long double> a, pair<long double, long double> b){
	if(a.first < b.first){
		return true;
	}else if(a.first > b.first){
		return false;
	}else{
		if(a.second > b.second){
			return true;
		}else{
			return false;
		}
	}
}

int main(){
	int n;
	cin >> n;
	vector<pair<long double, long double> > arr;
	
	for(int i = 0;i < n;i++){
		long double a,b;
		cin >> a >> b;
		long double temp = a/(a+b);
		arr.push_back({temp,i+1});
	}
	sort(arr.begin(),arr.end(), compare);
	for(int i = n-1;i >= 0;i--){
		cout << arr[i].second << " ";
	}
}
