#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> number;
vector<string> books;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N,M;
	cin >> N >> M;
	int a,b;
	string c;
	for(int i = 0;i < M;i++){
		cin >> a >> b;
		cin.ignore();
		getline(cin,c);
		number.push_back(make_pair(a,b));
		books.push_back(c);
	}
	cin >> a;
	for(int i = 0;i < M;i++){
		if(a == number[i].second){
			cout << books[i] << endl;
		}
	}
}
