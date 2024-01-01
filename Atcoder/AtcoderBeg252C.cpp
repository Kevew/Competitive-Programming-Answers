#include <bits/stdc++.h>
using namespace std;

string arr[110];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	int ans = 999999;
	for(char i = '0';i <= '9';i++){
		map<int,int> check;
		int largestvalue = 0, qvalue = 0;
		for(int j = 0;j < n;j++){
			int pos = 0;
			for(int x = 0;x < 10;x++){
				if(arr[j][x] == i){
					pos = x;
					break;
				}
			}
			check[pos]++;
			if(check[pos] > largestvalue){
				qvalue = pos;
				largestvalue = check[pos];
			}else if(check[pos] == largestvalue && pos > qvalue){
				qvalue = pos;
			}
		}
		ans = min(ans,(largestvalue-1)*10+qvalue);
	}
	cout << ans << endl;
}
