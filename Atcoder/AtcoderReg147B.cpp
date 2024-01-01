#include <bits/stdc++.h>
using namespace std;
 
int arr[410];
vector<pair<char,int>> ans;

void changePos(char a,int pos){
	ans.push_back({a,pos+1});
	swap(arr[pos],arr[pos+1+(a-'A')]);
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n-2;j++){
			if(arr[j]%2 != arr[j+2]%2 && arr[j]%2 != j%2){
				changePos('B',j);
			}
		}
	}
	for(int i = 0;i < n;i++){
		if(arr[i]%2 == i%2){
			changePos('A',i);
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n-2;j++){
			if(arr[j] > arr[j+2]){
				changePos('B',j);
			}
		}
	}
	cout << ans.size() << endl;
	for(auto j: ans){
		cout << j.first << " " << j.second << endl;
	}
}
