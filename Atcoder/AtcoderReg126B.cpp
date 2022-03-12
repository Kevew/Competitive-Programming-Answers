#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int N, M;
	cin >> N >> M;
 
	vector <vector <int>> matches(N);
 
	while (M--) {
		int a, b;
		cin >> a >> b;
		matches[a - 1].push_back(b - 1);
	}
 
	vector <int> seq;
 
	for (auto& v : matches) {
		sort(v.rbegin(), v.rend());
		for (auto i : v){
			seq.push_back(i);
		}
	}
 
	vector <int> v_act;
 
	for (auto i : seq) {
		auto poz = lower_bound(v_act.begin(), v_act.end(), i);
		if (poz == v_act.end()){
			v_act.push_back(i);
		}else{
			*poz = i;
		}
	}
 
	cout << v_act.size() << '\n';
 
	return 0;
}
