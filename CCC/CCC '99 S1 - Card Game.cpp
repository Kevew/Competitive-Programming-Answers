#include <bits/stdc++.h>
using namespace std;

int pa,pb;

void printa(bool person,int score){
	if(person){
		cout << "Player A scores " << score << " point(s)." << endl;
		pa += score;
	}else{
		cout << "Player B scores " << score << " point(s)." << endl;
		pb += score;
	}
}

int main(){
	string a;
	int prev = -1,high = -1;
	for(int i = 0;i < 52;i++){
		cin >> a;
		if(a == "ace"){
			prev = 3;
			high = 3;
		}else if(a == "king"){
			prev = 2;
			high = 2;
		}else if(a == "queen"){
			prev = 1;
			high = 1;
		}else if(a == "jack"){
			prev = 0;
			high = 0;
		}else{
			if(prev == 0){
				printa((i-high)%2,high+1);
				prev--;
			}
			if(prev != -1){
				prev--;
			}
		}
	}
	cout << "Player A: " << pa << " point(s)." << endl;
	cout << "Player B: " << pb << " point(s)." << endl;
}
