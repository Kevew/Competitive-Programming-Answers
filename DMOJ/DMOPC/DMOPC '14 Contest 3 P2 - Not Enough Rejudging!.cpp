#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	string a;
	int IR = 0;
	vector<string> print;
	int WAs = 0;
	for(int i = 0;i < N;i++){
		cin >> a;
		if(a == "AC"){
			print.push_back("AC");
		}else if(a == "TLE"){
			print.push_back("WA");
		}else if(a == "WA"){
			WAs++;
			print.push_back("TEMP");
		}else{
			IR++;
			if(IR <= 10){
				print.push_back("AC");
			}else if(IR <= 20){
				print.push_back("WA");
			}else{
				print.push_back("IR");
			}
		}
	}
	WAs = (WAs*3)/10;
	for(int i = 0;i < print.size();i++){
		if(print[i] == "TEMP"){
			if(WAs > 0){
				WAs--;
				cout << "AC" << endl;
			}else{
				cout << "WA" << endl;
			}
		}else{
			cout << print[i] << endl;
		}
	}
}
