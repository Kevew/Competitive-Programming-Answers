#include <bits/stdc++.h>
using namespace std;

map<long long,long long> rightt;
map<long long,long long> leftt;
pair<long long,long long> arr[200010];

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i].first >> arr[i].second;
	}
	string a;
	cin >> a;
	for(long long i = 0;i < n;i++){
		 if(a[i] == 'R'){
		 	if(leftt.find(arr[i].second) != leftt.end()){
		 		if(leftt[arr[i].second] > arr[i].first){
		 			cout << "Yes" << endl;
		 			return 0;
				 }
			}
			if(rightt.find(arr[i].second) == rightt.end()){
				rightt[arr[i].second] = arr[i].first;
			}
			rightt[arr[i].second] = min(rightt[arr[i].second],arr[i].first);
		 }else{
		 	if(rightt.find(arr[i].second) != rightt.end()){
		 		if(rightt[arr[i].second] < arr[i].first){
		 			cout << "Yes" << endl;
		 			return 0;
				 }
			}
			if(leftt.find(arr[i].second) == leftt.end()){
				leftt[arr[i].second] = arr[i].first;
			}
			leftt[arr[i].second] = max(leftt[arr[i].second],arr[i].first);
		 }
	}
	cout << "No" << endl;
}
