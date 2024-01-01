#include <bits/stdc++.h>
using namespace std;

vector<int> curr;
int n,m;

void func(int s,int index){
	if(index == n-1){
		for(int i = s+1;i <= m;i++){
			for(auto j: curr){
 				cout << j << " ";
			}
			cout << i << endl;
		}
		return;
	}
	for(int i = s+1;i <= m;i++){
		curr.push_back(i);
		func(i,index+1);
		curr.pop_back();
	}
}

int main(){
	cin >> n >> m;
	func(0,0);
}
