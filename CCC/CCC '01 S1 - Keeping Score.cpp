#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	cout << "Cards Dealt              Points" << endl;
	int i = 1,previ = 0,totalpoints = 0,tempoints = 0;
	cout << "Clubs ";
	for(;i < a.size();i++){
		if(a[i] == 'D'){
			break;
		}
		cout << a[i] << " ";
		if(a[i] == 'A'){
			tempoints += 4;
		}else if(a[i] == 'K'){
			tempoints += 3;
		}else if(a[i] == 'Q'){
			tempoints += 2;
		}else if(a[i] == 'J'){
			tempoints += 1;
		}
	}
	if(i-previ <= 3){
		tempoints += 3-(i-previ-1);
	}
	totalpoints += tempoints;
	cout << tempoints << endl;
	tempoints = 0;
	previ = i;
	i++;
	
	
	cout << "Diamonds ";
	for(;i < a.size();i++){
		if(a[i] == 'H'){
			break;
		}
		cout << a[i] << " ";
		if(a[i] == 'A'){
			tempoints += 4;
		}else if(a[i] == 'K'){
			tempoints += 3;
		}else if(a[i] == 'Q'){
			tempoints += 2;
		}else if(a[i] == 'J'){
			tempoints += 1;
		}
	}
	if(i-previ <= 3){
		tempoints += 3-(i-previ-1);
	}
	totalpoints += tempoints;
	cout << tempoints << endl;
	tempoints = 0;
	previ = i;
	
	
	i++;
	
	
	cout << "Hearts ";
	for(;i < a.size();i++){
		if(a[i] == 'S'){
			break;
		}
		cout << a[i] << " ";
		if(a[i] == 'A'){
			tempoints += 4;
		}else if(a[i] == 'K'){
			tempoints += 3;
		}else if(a[i] == 'Q'){
			tempoints += 2;
		}else if(a[i] == 'J'){
			tempoints += 1;
		}
	}
	if(i-previ <= 3){
		tempoints += 3-(i-previ-1);
	}
	totalpoints += tempoints;
	cout << tempoints << endl;
	tempoints = 0;
	previ = i;
	i++;
	
	
	cout << "Spades ";
	for(;i < a.size();i++){
		cout << a[i] << " ";
		if(a[i] == 'A'){
			tempoints += 4;
		}else if(a[i] == 'K'){
			tempoints += 3;
		}else if(a[i] == 'Q'){
			tempoints += 2;
		}else if(a[i] == 'J'){
			tempoints += 1;
		}
	}
	if(i-previ <= 3){
		tempoints += 3-(i-previ-1);
	}
	totalpoints += tempoints;
	cout << tempoints << endl;
	
	cout << "                       Total " << totalpoints << endl;
}
