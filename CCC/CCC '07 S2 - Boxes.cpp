#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int> a,vector<int> b){
	if(a[3] <= b[3]){
		return true;
	}else{
		return false;
	}
}

int main(){
	vector<vector<int>> boxes;
	int N;
	cin >> N;
	int p1,p2,p3,p4;
	for(int i = 0;i < N;i++){
		vector<int> temp;
		cin >> p1 >> p2 >> p3;
		if(p1 > p2){
			swap(p1,p2);
		}
		if(p2 > p3){
			swap(p2,p3);
		}
		if(p1 > p2){
			swap(p1,p2);
		}
		p4 = p1*p2*p3;
		temp.push_back(p1);
		temp.push_back(p2);
		temp.push_back(p3);
		temp.push_back(p4);
		boxes.push_back(temp);
	}
	
	sort(boxes.begin(),boxes.end(),compare);
	
	int Q;
	cin >> Q;
	for(int i = 0;i < Q;i++){
		cin >> p1 >> p2 >> p3;
		if(p1 > p2){
			swap(p1,p2);
		}
		if(p2 > p3){
			swap(p2,p3);
		}
		if(p1 > p2){
			swap(p1,p2);
		}
		p4 = -1;
		for(int j = 0;j < N;j++){
			if(p1 <= boxes[j][0] && p2 <= boxes[j][1] && p3 <= boxes[j][2]){
				p4 = boxes[j][3];
				break;
			}
		}
		if(p4 == -1){
			cout << "Item does not fit." << endl;
		}else{
			cout << p4 << endl;
		}
	}
}
