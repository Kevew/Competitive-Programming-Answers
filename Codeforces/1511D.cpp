#include <bits/stdc++.h>
using namespace std;

int cur[30];

int n,k;
vector<int> ans;

void check(int x){
	while(cur[x] < k){
		int temp = cur[x];
		cur[x]++;
		check(temp);
		ans.push_back(temp);
	}
}

int main(){
	cin >> n >> k;
	check(0);
	cout << "a";
	for(int i = 0;i < n-1;i++){
		cout<<(char)(ans[i%ans.size()]+'a');
	}
}
