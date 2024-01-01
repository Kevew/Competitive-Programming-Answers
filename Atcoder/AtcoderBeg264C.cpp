#include <bits/stdc++.h>
using namespace std;

vector<int> arr[11];
vector<int> arr2[11];

bool endcode = false;

int n,m;
int n2,m2;

void bitmask(vector<pair<int,int>> check,int index){
	int n1 = check.size();
	int nt = pow(2,n1);
	for(int i = 0;i < nt;i++){
		vector<int> temp;
		vector<int> use;
		for(int j = 0;j < n1;j++){
			if(i&(1<<j)){
				temp.push_back(check[j].first);
				use.push_back(check[j].second);
			}
		}
		if(temp == arr2[0]){
			int curr = 1;
			if(curr == n2){
				cout << "Yes" << endl;
				endcode = true;
				return;
			}
			if(index == n){
				break;
			}
			while(curr < n2){
				bool flag = false;
				for(int j = 0;j < use.size();j++){
					if(arr[index][use[j]] != arr2[curr][j]){
						index++;
						flag = true;
						break;
					}
				}
				if(!flag){
					curr++;
					if(curr == n2){
						cout << "Yes" << endl;
						endcode = true;
						return;
					}
				}
				if(index == n){
					break;
				}
			}
		}
	}
}

int main(){
	int temp;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> temp;
			arr[i].push_back(temp);
		}
	}

	cin >> n2 >> m2;
	map<int,int> cnt;
	for(int i = 0;i < n2;i++){
		for(int j = 0;j < m2;j++){
			cin >> temp;
			arr2[i].push_back(temp);
			if(i == 0){
				cnt[arr2[i][j]]++;
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		int curr = 0;
		vector<pair<int,int>> check;
		for(int j = 0;j < m;j++){
			if(cnt[arr[i][j]] > 0){
				check.push_back({arr[i][j],j});
			}
		}
		bitmask(check,i);
		if(endcode){
			return 0;
		}
	}
	cout << "No" << endl;
}
