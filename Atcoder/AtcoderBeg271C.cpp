#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	deque<long long> arr;
	map<int,bool> cnt;
	long long bonus = 0;
	for(long long i = 0;i < n;i++){
		long long a;
		cin >> a;
		if(cnt[a]){
			bonus++;
		}else{
			arr.push_back(a);
		}
		cnt[a] = true;
	}
	sort(arr.begin(),arr.end());
	long long pos = 1;
	while(arr.size() > 0){
		if(pos == arr[0]){
			pos++;
			arr.pop_front();
			continue;
		}else{
			if(bonus >= 2){
				bonus-=2;
				pos++;
				continue;
			}else if(bonus == 1){
				arr.pop_back();
				bonus--;
				pos++;
				continue;
			}else{
				if(arr.size() > 1){
					arr.pop_back();
					arr.pop_back();
					pos++;
				}else{
					break;
				}
			}
		}
	}
	pos += bonus/2;
	cout << pos-1 << endl;
}
