#include <bits/stdc++.h>
using namespace std;

#define pairlonglong pair<long long,pair<bool,long long>>

vector<pairlonglong> arr;

bool compare(pairlonglong a, pairlonglong b){
	if(a.first < b.first){
		return true;
	}	
	return false;
}

int main(){
	int a;
	cin >> a;
	long long x,y,z;
	long long right = 0,ans = 0,left = 0;
	for(int i = 0;i < a;i++){
		cin >> x >> y >> z;
		arr.push_back(make_pair(max(0LL,x-z),make_pair(false,y)));
		arr.push_back(make_pair(x+z,make_pair(true,y)));
		ans += max(0LL,x-z)*y;
		right += y;
	}
	sort(arr.begin(),arr.end(),compare);
	
	arr.insert(arr.begin(),make_pair(0LL,make_pair(false,0LL)));
	
	long long temp = ans;
	
	for(int i = 1;i < arr.size();i++){
		while(i < arr.size() && arr[i-1].first == arr[i].first){
			if(arr[i].second.first == true){
				left += arr[i].second.second;
			}else{
				right -= arr[i].second.second;
			}
			i++;
		}
		temp += (left-right)*(arr[i].first-arr[i-1].first);
		ans = min(ans,temp);
		if(arr[i].second.first == true){
			left += arr[i].second.second;
		}else{
			right -= arr[i].second.second;
		}
	}
	
	cout << ans << endl;
}
