#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int temp[N+1];
	for(int i = 0;i < N;i++){
		cin >> temp[i];
	}
	sort(temp,temp+N);
	double lowest = 999999999999;
	for(int i = 1;i < N-1;i++){
		lowest = min(lowest,((double)temp[i]-temp[i-1])/2+((double)temp[i+1]-temp[i])/2);
	}
	cout << fixed << setprecision(1);
	cout << lowest << endl;
}
