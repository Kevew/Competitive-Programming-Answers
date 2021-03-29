#include <bits/stdc++.h>
using namespace std;

int prefix[1000010];

int main(){
	int N;
	cin >> N;
	prefix[0] = 0;
	for(int i = 0;i < N;i++){
		cin >> prefix[i+1];
		prefix[i+1] = prefix[i]+prefix[i+1];
	}
	int M;
	cin >> M;
	int a,b;
	for(int i = 0;i < M;i++){
		cin >> a >> b;
		cout << prefix[b+1]-prefix[a] << "\n";
	}
}
