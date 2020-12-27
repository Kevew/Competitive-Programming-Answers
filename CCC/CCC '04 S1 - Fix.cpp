#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		string p1,p2,p3;
		cin >> p1 >> p2 >> p3;
		int p1s = p1.size(),p2s = p2.size(),p3s = p3.size();
		bool check = false;
		if(p3.substr(0,min(p3s,p1s)) == p1 || p3.substr(max(0,p3s-p1s),max(p1s,p3s-p1s)) == p1){
			check = true;
		}
		if(p3.substr(0,min(p3s,p2s)) == p2 || p3.substr(max(0,p3s-p2s),max(p2s,p3s-p2s)) == p2){
			check = true;
		}
		if(p1.substr(0,min(p1s,p2s)) == p2 || p1.substr(max(0,p1s-p2s),max(p2s,p1s-p2s)) == p2){
			check = true;
		}
		if(p1.substr(0,min(p1s,p3s)) == p3 || p1.substr(max(0,p1s-p3s),max(p3s,p1s-p3s)) == p3){
			check = true;
		}
		if(p2.substr(0,min(p2s,p1s)) == p1 || p2.substr(max(0,p2s-p1s),max(p1s,p2s-p1s)) == p1){
			check = true;
		}
		if(p2.substr(0,min(p2s,p3s)) == p3 || p2.substr(max(0,p2s-p3s),max(p3s,p2s-p3s)) == p3){
			check = true;
		}
		if(check){
			cout << "No" << endl;
		}else{
			cout << "Yes" << endl;
		}
	}
}
