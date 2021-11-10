#include <bits/stdc++.h>
using namespace std;

int n;
int deck[60];
int newdeck[60];

void updatedeck(vector<int> curr){
	int sum = 0;
	for(int i = 0;i < curr.size();i++){
		for(int j = 0;j < curr[i];j++){
			newdeck[n-sum-curr[i]+j] = deck[sum+j];
		}
		sum += curr[i];
	}
	for(int i = 0;i < n;i++){
		deck[i] = newdeck[i];
	}
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> deck[i];
	}
	
	vector<vector<int>> ans;
	while(true){
		vector<int> curr;
		for(int i = 0;i < n;i++){
			if(deck[i] == i+1){
				continue;
			}
			if(i != 0){
				curr.push_back(i);
			}
			for(int j = i+1;j < n;j++){
				if(deck[j] == deck[j-1]+1){
					continue;
				}
				curr.push_back(j-i);
				for(int x = j;x < n;x++){
					if(deck[x] != deck[i]-1){
						continue;
					}
					curr.push_back(x-j+1);
					if(x < n-1){
						curr.push_back(n-x-1);
					}
					break;
				}
				break;
			}
			break;
		}
		
		if(curr.empty()){
			break;
		}
		ans.push_back(curr);
		updatedeck(curr);
	}
	
	cout << ans.size() << endl;
	for(int i = 0;i < ans.size();i++){
		cout << ans[i].size() << " ";
		for(int j = 0;j < ans[i].size();j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}
