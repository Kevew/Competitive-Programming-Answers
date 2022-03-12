#include <bits/stdc++.h>
using namespace std;

int fastest[1000010];

int a,b;

void solve(string curr,int time){
	long long temp = stoll(curr);
	if(temp <= 1000000){
		if(fastest[temp] > time){
			fastest[temp] = time;
			if(temp >= 10 && temp%10 != 0){
				string a1 = "";
				a1 += curr[curr.size()-1];
				curr.insert(0,a1);
				curr.pop_back();
				solve(curr,time+1);
			}
			temp *= a;
			solve(to_string(temp),time+1);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for(int i = 0;i <= 1000000;i++){
		fastest[i] = 1e9;
	}
	cin >> a >> b;
	solve("1",0);
	
	if(fastest[b] == 1e9){
		cout << "-1" << endl;
	}else{
		cout << fastest[b] << endl;
	}
}
