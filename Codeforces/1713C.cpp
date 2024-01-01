#include <bits/stdc++.h>
using namespace std;

int arr[200010];

vector<vector<int>> firstTwo;

void recur(int n){
	if(arr[n] == 0){
		for(int i = n-1;i >= 0;i--){
			cout << i << " ";
		}
		return;
	}
	if(n == 2 || n == 3){
		n -= 2;
		for(auto i: firstTwo[n]){
			cout << i << " ";
		}
		return;
	}
	recur(arr[n]);
	for(int i = n-1;i >= arr[n];i--){
		cout << i << " ";
	}
}

void solve(){
	int n;
	cin >> n;
	recur(n);
	cout << endl;
}



void setup(){
	int curr = 1, currreset = 2;
	int i = 3;
	arr[1] = 0;
	while(i <= 100010){
		for(curr = currreset;curr >= 0;curr--){
			arr[i] = curr;
			i++;
		}
		currreset+=2;
	}
	vector<int> temp;
	temp.clear();
	temp.push_back(1);
	temp.push_back(0);
	firstTwo.push_back(temp);
	temp.clear();
	temp.push_back(1);
	temp.push_back(0);
	temp.push_back(2);
	firstTwo.push_back(temp);
}

int main(){
	setup();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
}

/*
0 - 0
1 0 - 1 - exception
1 0 2 - 2 - exception
0 3 2 1 - 1
4 3 2 1 0 - 0
0 3 2 1 5 4 - 4
1 0 2 6 5 4 3 - 3
1 0 7 6 5 4 3 2 - 2
0 8 7 6 5 4 3 2 1 - 1
9 8 7 6 5 4 3 2 1 0 - 0
0 3 2 1 5 4 10 9 8 7 6 - 6
4 3 2 1 0 11 10 9 8 7 6 5 - 5
0 3 2 1 12 11 10 9 8 7 6 5 4 - 4
1 0 2 13 12 11 10 9 8 7 6 5 4 3 - 3
1 0 14 13 12 11 10 9 8 7 6 5 4 3 2 - 2
0 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 - 1
16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 - 0
1 0 7 6 5 4 3 2 17 16 15 14 13 12 11 10 9 8 - 8
*/
