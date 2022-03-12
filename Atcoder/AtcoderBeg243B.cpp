#include <bits/stdc++.h>
using namespace std;

map<int,int> pos1;

int arr[1010];
int arr2[1010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		pos1[arr[i]] = i;
	}
	int a = 0,b = 0;
	for(int i = 0;i < n;i++){
		cin >> arr2[i];
		if(pos1.find(arr2[i]) != pos1.end()){
			if(pos1[arr2[i]] == i){
				a++;
			}else{
				b++;
			}
		}
	}
	cout << a << endl;
	cout << b << endl;
}
