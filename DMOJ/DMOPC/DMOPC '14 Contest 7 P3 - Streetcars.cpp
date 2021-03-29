#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int a,b;
	
	vector<int> oldcars;
	vector<int> newcars;
	for(int i = 0;i < N;i++){
		cin >> a >> b;
		for(int j = 0;j < oldcars.size();j++){
			oldcars[j] -= oldcars[j] * b/100;
		}
		for(int j = 0;j < newcars.size();j++){
			newcars[j] -= newcars[j] * b/100;
		}
		int temp = a,j = 0;
		while(temp > 0){
			if(j == oldcars.size()){
				oldcars.push_back(0);
			}
			int m = min(132-oldcars[j],temp);
			oldcars[j]+=m;
			temp-=m;
			j++;
		}
		temp = a,j = 0;
		while(temp > 0){
			if(j == newcars.size()){
				newcars.push_back(0);
			}
			int m = min(251-newcars[j],temp);
			newcars[j]+=m;
			temp-=m;
			j++;
		}
	}
	cout << oldcars.size()-newcars.size();
}
