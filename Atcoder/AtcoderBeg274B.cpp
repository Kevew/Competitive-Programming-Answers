#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> arr(m,0);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			char c;
			cin >> c;
			if(c == '#'){
				arr[j]++;
			}
		}
	}
	for(int i = 0;i < m;i++){
		cout << arr[i] << " ";
	}
}
