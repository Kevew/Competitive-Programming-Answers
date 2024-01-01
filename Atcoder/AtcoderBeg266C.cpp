#include <bits/stdc++.h>
using namespace std;
 
int check(vector<vector<int> >& A)
{
    int x1 = (A[1][0] - A[0][0]);
    int y1 = (A[1][1] - A[0][1]);
    int x2 = (A[2][0] - A[0][0]);
    int y2 = (A[2][1] - A[0][1]);
    return (x1 * y2 - y1 * x2);
}
 
bool solve(vector<vector<int> >& points){
    int prev = 0;
    int curr = 0;
    for (int i = 0; i < 4; i++) {
        vector<vector<int>> temp;
        temp.push_back(points[i]);
        temp.push_back(points[(i+1)%4]);
        temp.push_back(points[(i+2)%4]);
 
        curr = check(temp);
 
        if(curr != 0){
            if(curr * prev < 0){
                return false;
            }
            else {
                prev = curr;
            }
        }
    }
    return true;
}
 
int main(){
    vector<vector<int>> points;
 	for(int i = 0;i < 4;i++){
 		int a,b;
 		cin >> a >> b;
 		points.push_back({a,b});
	}
    if(solve(points)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
