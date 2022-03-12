#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	deque<pair<int,int>> check;
	int a;
	int curr = 0,prev = -1;
	for(int i = 0;i < n;i++){
		cin >> a;
		if(!check.empty() && check.back().second+1 == a-1 && check.back().first == a){
			int temp = check.back().second+1;
			for(int j = 0;j < temp;j++){
				check.pop_back();
			}
		}else{
			if(check.empty()){
				check.push_back({a,0});
			}else{
				if(check.back().first == a){
					check.push_back({a,check.back().second+1});
				}else{
					check.push_back({a,0});
				}
			}
		}
		
		prev = a;
		cout << check.size() << endl;
	}
}
