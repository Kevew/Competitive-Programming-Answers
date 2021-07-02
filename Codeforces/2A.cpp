#include <bits/stdc++.h>
using namespace std;

map<string,int> score;
map<string,int> test;

string names[1010];
int numbers[1010];

int main(){
	int n;
	cin >> n;
	vector<string> check;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> names[i] >> numbers[i];
		score[names[i]] += numbers[i];
	}
	int h = -1000010;
	for(int i = 0;i < n;i++){
		h = max(h,score[names[i]]);
	}
	
	int i = 0;
	test[names[i]] += numbers[i];
	while(test[names[i]] < h || score[names[i]] < h){
		i++;
		test[names[i]] += numbers[i];
	}
	cout << names[i] << endl;
	
}
