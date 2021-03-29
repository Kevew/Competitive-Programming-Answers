#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> logs(N);
	vector<int> saws(N);
	for(int i = 0;i < N;i++){
		cin >> saws[i];
	}
	for(int i = 0;i < N;i++){
		cin >> logs[i];
	}
	sort(logs.begin(),logs.end());
	sort(saws.begin(),saws.end());
	long long ans = 0;
	for(int i = 0;i < N;i++){
		ans += saws[N-i-1]*logs[i];
	}
	cout << ans << endl;
}
