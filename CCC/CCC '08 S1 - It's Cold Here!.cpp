#include <bits/stdc++.h>
using namespace std;

string names[10010];
int temperature[10010];

int main(){
	string a = "";
	int i = 0;
	while(a != "Waterloo"){
		cin >> a;
		names[i] = a;
		cin >> temperature[i];
		i++;
	}
	int s = i;
	int coldest = 210,curr;
	for(i = 0;i < s;i++){
		if(temperature[i] < coldest){
			curr = i;
			coldest = temperature[i];
		}
	}
	cout << names[curr] << endl;
}
