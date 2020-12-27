#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	while(true){
		a++;
		string temp = to_string(a);
		bool fail = true;
		int arr[20];
		memset(arr,0,sizeof(arr));
		for(int i = 0;i < temp.size();i++){
			arr[temp[i]-'0']++;
			if(arr[temp[i]-'0'] == 2){
				fail = false;
				break;
			}
		}
		if(fail == true){
			break;
		}
	}
	cout << a << endl;
}
