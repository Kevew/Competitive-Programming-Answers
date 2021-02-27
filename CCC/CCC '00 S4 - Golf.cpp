#include <bits/stdc++.h>
using namespace std;

int arr[50],ans[5400];

int main(){
	for(int i = 0;i < 5400;i++){
		ans[i] = 9999999;
	}
	int area;
	cin >> area;
	int a,temp;
	cin >> a;
	for(int i = 0;i < a;i++){
		cin >> arr[i];
	}
	int cur = 0;
	ans[0] = 0;
	for(int i = 0;i <= area;i++){
		if(ans[i] < 9999999){
			for(int j = 0;j < a;j++){
				ans[i+arr[j]] = min(ans[i+arr[j]],ans[i]+1);
			}
		}
	}
	if(ans[area] == 9999999){
		cout << "Roberta acknowledges defeat." << endl;
	}else{
		cout << "Roberta wins in " << ans[area] << " strokes." << endl;
	}
}
