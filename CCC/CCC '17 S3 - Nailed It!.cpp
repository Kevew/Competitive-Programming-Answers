#include <bits/stdc++.h>
using namespace std;

long long boards[2010];
long long fence[4010];

int main(){
	int N;
	cin >> N;
	int temp;
	for(int i = 0;i < N;i++){
		cin >> temp;
		boards[temp]++;
	}
	
	for(int i = 1;i <= 2000;i++){
		if(boards[i] >= 1){
			for(int j = i;j <= 2000;j++){
				if(i == j){
					fence[i+j] += boards[i] >> 1;
				}else if(boards[j]){
					fence[i+j] += min(boards[i],boards[j]);
				}
			}
		}
	}
	
	long long ans = 0,curr = 0;
	for(int i = 1;i <= 4000;i++){
		if(fence[i] > curr){
			curr = fence[i];
			ans = 1;
		}else if(fence[i] == curr){
			ans++;
		}
	}
	cout << curr << " " << ans << endl;
}
