#include <bits/stdc++.h>
using namespace std;

int main(){
	long long q;
	cin >> q;
	multiset<long long> arr;
	multiset<long long> board;
	while(q--){
		long long a;
		cin >> a;
		if(a == 1){
			long long b;
			cin >> b;
			board.insert(b);
			if(next(board.find(b)) != board.end() && board.find(b) != board.begin()){
				long long temp = (*next(board.find(b))) ^ (*prev(board.find(b)));
				arr.erase(arr.find(temp));
			}
			if(next(board.find(b)) != board.end()){
				long long temp = (*next(board.find(b))) ^ b;
				arr.insert(temp);
			}
			if(board.find(b) != board.begin()){
				long long temp = (*prev(board.find(b))) ^ b;
				arr.insert(temp);
			}
		}else if(a == 2){
			long long b;
			cin >> b;
			if(next(board.find(b)) != board.end()){
				long long temp = (*next(board.find(b))) ^ b;
				arr.erase(arr.find(temp));
			}
			if(board.find(b) != board.begin()){
				long long temp = (*prev(board.find(b))) ^ b;
				arr.erase(arr.find(temp));
			}
			if(next(board.find(b)) != board.end() && board.find(b) != board.begin()){
				long long temp = (*next(board.find(b))) ^ (*prev(board.find(b)));
				arr.insert(temp);
			}
	
			board.erase(board.find(b));
		}else{
			cout << *arr.begin() << endl;
		}
	}
}

// 2 3 10
