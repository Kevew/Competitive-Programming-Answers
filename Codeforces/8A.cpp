#include <bits/stdc++.h>
using namespace std;

string arr[4] = {"fantasy","forward","backward","both"};

int main(){
	string a;
	cin >> a;
	string b,c;
	cin >> b >> c;
	int ans = 0;
	int temp = a.find(b);
	if(a.find(b) != string::npos && a.find(c,temp+b.size()) != string::npos){
		ans++;
	}
	reverse(a.begin(),a.end());
	temp = a.find(b);
	if(a.find(b) != string::npos && a.find(c,temp+b.size()) != string::npos){
		ans+=2;
	}
	cout << arr[ans] << endl;
}
