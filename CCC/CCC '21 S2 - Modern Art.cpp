//Name: Kevin Wei
#include <bits/stdc++.h>
using namespace std;

int row[5000010],col[5000010];

int main(){
	int N,M;
	cin >> N >> M;
	int K;
	cin >> K;
	char temp;
	int temp1;
	for(int i = 0;i < K;i++){
		cin >> temp >> temp1;
		if(temp == 'R'){
			row[temp1]++;
		}else{
			col[temp1]++;
		}
	}
	int addon = 0;
	for(int i = 1;i <= M;i++){
		if(col[i]%2 == 1){
			addon++;
		}
	}
	long long ans = 0;
	for(int i = 1;i <= N;i++){
		if(row[i]%2 == 0){
			ans += addon;
		}else{
			ans += M-addon;
		}
	}
	cout << ans << endl;
} 
