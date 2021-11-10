#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	int test;
	deque<int> curr;
	multiset<int> sortedver;
	for(int i = 0;i < q;i++){
		cin >> test;
		if(test == 1){
			int a;
			cin >> a;
			curr.push_back(a);
		}else if(test == 2){
			if(sortedver.size() == 0){
				int temp = curr.front();
				cout << temp << endl;
				curr.pop_front();
			}else{
				int temp = *sortedver.begin();
				cout << temp << endl;
				sortedver.erase(sortedver.begin());
			}
		}else{
			int temp = curr.size();
			for(int j = temp-1;j >= 0;j--){
				sortedver.insert(curr.back());
				curr.pop_back();
			}
		}
	}
}
