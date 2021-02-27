#include <bits/stdc++.h>
using namespace std;

void solve(){
	deque<int> mountaintop;
	int N;
	cin >> N;
	int temp;
	for(int i = 0;i < N;i++){
		cin >> temp;
		mountaintop.push_back(temp);
	}
	stack<int> branch;
	int currequest = 1;
	bool work = true;
	while(true){
		if(mountaintop.size() > 0 && branch.size() > 0){
			if(mountaintop.back() == currequest){
				currequest++;
				mountaintop.pop_back();
			}else if(branch.top() == currequest){
				currequest++;
				branch.pop();
			}else{
				branch.push(mountaintop.back());
				mountaintop.pop_back();
			}
		}else if(mountaintop.size() > 0){
			if(mountaintop.back() == currequest){
				currequest++;
				mountaintop.pop_back();
			}else{
				branch.push(mountaintop.back());
				mountaintop.pop_back();
			}
		}else if(branch.size() > 0){
			if(branch.top() == currequest){
				currequest++;
				branch.pop();
			}else{
				work = false;
				break;
			}
		}
		if(currequest == N){
			break;
		}
	}
	if(work){
		cout << "Y" << endl;
	}else{
		cout << "N" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
