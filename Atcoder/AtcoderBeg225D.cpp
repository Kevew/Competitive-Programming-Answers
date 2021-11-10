#include <bits/stdc++.h>
using namespace std;

int front[100010];
int backcar[100010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,Q;
	cin >> n >> Q;
	int t,a,b;
	for(int i = 0;i < Q;i++){
		cin >> t;
		if(t == 1){
			cin >> a >> b;
			front[a] = b;
			backcar[b] = a;
		}else if(t == 2){
			cin >> a >> b;
			front[a] = 0;
			backcar[b] = 0;
		}else{
			cin >> a;
			int ans = 0;
			vector<bool> visited(n+1,false);
			int temp = a;
			while(backcar[temp] != 0 && !visited[temp]){
				visited[temp] = true;
				temp = backcar[temp];
			}
			vector<bool> check(n+1,false);
			int totsize = 0;
			vector<int> printout;
			while(front[temp] != 0 && !check[temp]){
				totsize++;
				printout.push_back(temp);
				check[temp] = true;
				temp = front[temp];
			}
			printout.push_back(temp);
			cout << totsize+1 << " ";
			for(int i = 0;i < printout.size();i++){
				cout << printout[i] << " ";
			}
			cout << endl;
		}
	}
}
