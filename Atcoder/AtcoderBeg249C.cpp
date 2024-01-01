#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	vector<string> arr(a);
	for(int i = 0;i < a;i++){
		cin >> arr[i];
	}
	int ans = 0;
	for(int i = 0;i < (1<<15);i++){
		vector<string> temp;
		for(int j = 0;j < a;j++){
			if(i&(1<<j)){
				temp.push_back(arr[j]);
			}
		}
		map<char,int> alpha;
		for(int j = 0;j < temp.size();j++){
			for(int x = 0;x < temp[j].size();x++){
				alpha[temp[j][x]]++;
			}
		}
		int distinct = 0;
		for(char j = 'a';j <= 'z';j++){
			if(alpha[j] == b){
				distinct++;
			}
		}
		ans = max(ans,distinct);
	}
	cout << ans << endl;
}
