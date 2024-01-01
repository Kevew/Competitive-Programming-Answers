#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

map<char, vector<long long>> m;

int main(){
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	string mex;
	cin >> mex;
	long long ans = 0;
	vector<long long> temp1(3,0);
	m['m'] = temp1;
	vector<long long> temp2(9,0);
	m['e'] = temp2;
	for(long long i = 0;i < n;i++){
		if(mex[i] == 'M'){
			m['m'][arr[i]]++;
		}else if(mex[i] == 'E'){
			for(long long j = 0;j < 3;j++){
				m['e'][arr[i]*3+j] += m['m'][j];
			}
		}else{
			for(long long j = 0;j < 9;j++){
				long long addon = 0;
				long long temp = m['e'][j];
				long long a = j/3;
				long long b = j-(a)*3;
				long long c = arr[i];
				if(a == 0 || b == 0 || c == 0){
					addon += 1;
					if(a == 1 || b == 1 || c == 1){
						addon += 1;
						if(a == 2 || b == 2 || c == 2){
							addon += 1;
						}
					}
				}
				ans += addon * temp;
			}
		}
	}
	cout << ans << endl;
}
