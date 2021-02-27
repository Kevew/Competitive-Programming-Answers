#include <bits/stdc++.h>
using namespace std;

int fastest[110][110];
int r,c;

int winans = 9999999;
int staleans = 9999999;
bool win = false;

void bfs(int y,int x,int starty,int startx){
	queue<pair<pair<int,int>,int>> next;
	next.push(make_pair(make_pair(starty,startx),0));
	while(!next.empty()){
		pair<pair<int,int>,int> curr = next.front();
		next.pop();
		int curry = curr.first.first,currx = curr.first.second;
		if(curry > 0 && curry <= r && currx > 0 && currx <= c){
			if(fastest[curry][currx] > curr.second){
				fastest[curry][currx] = curr.second;
				if(y+curr.second == r){
					continue;
				}
				if(currx == x && curry == y+curr.second){
					win = true;
					winans = min(winans,curr.second);
				}
				
				if(currx == x && curry == y+curr.second+1){
					staleans = min(staleans,curr.second);
				}else{
					next.push(make_pair(make_pair(curry+2,currx+1),curr.second+1));
					next.push(make_pair(make_pair(curry+1,currx+2),curr.second+1));
					next.push(make_pair(make_pair(curry-2,currx+1),curr.second+1));
					next.push(make_pair(make_pair(curry-1,currx+2),curr.second+1));
					next.push(make_pair(make_pair(curry+2,currx-1),curr.second+1));
					next.push(make_pair(make_pair(curry+1,currx-2),curr.second+1));
					next.push(make_pair(make_pair(curry-2,currx-1),curr.second+1));
					next.push(make_pair(make_pair(curry-1,currx-2),curr.second+1));
				}
			}else{
				if(y+curr.second == r){
					continue;
				}
				if(currx == x && curry == y+curr.second){
					win = true;
					winans = min(winans,curr.second);
				}else if(currx == x && curry == y+curr.second+1){
					staleans = min(staleans,curr.second);
				}
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		winans = 9999999;
		staleans = 9999999;
		win = false;
		for(int i = 0;i <= 100;i++){
			for(int j = 0;j <= 100;j++){
				fastest[i][j] = 9999999;
			}
		}
		cin >> r >> c;
		int pr,pc;
		cin >> pr >> pc;
		int kr,kc;
		cin >> kr >> kc;
		bfs(pr,pc,kr,kc);0
		if(win == true){
			cout << "Win in " << winans << " knight move(s)." << endl;
		}else if(staleans != 9999999){
			cout << "Stalemate in " << staleans << " knight move(s)." << endl;
		}else{
			cout << "Loss in " << r-pr-1 << " knight move(s)." << endl;
		}
	}
}
