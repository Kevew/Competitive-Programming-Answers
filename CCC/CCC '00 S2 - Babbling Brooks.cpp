#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<double> streams;
	double temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		streams.push_back(temp);
	}
	cin >> temp;
	while(temp != 77){
		if(temp == 99){
			int pos;
			double percent;
			cin >> pos >> percent;
			pos--;
			double split1 = (streams[pos]*(percent/100));
			double split2 = (streams[pos]*((100-percent)/100));
			streams.erase(streams.begin()+pos);
			streams.insert(streams.begin()+pos,split2);
			streams.insert(streams.begin()+pos,split1);
		}else if(temp == 88){
			int pos;
			cin >> pos;
			streams[pos]+=streams[pos-1];
			streams.erase(streams.begin()+pos-1);
		}
		cin >> temp;
	}
	
	for(int i = 0;i < streams.size();i++){
		cout << streams[i] << " ";
	}
}

