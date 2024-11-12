#include <iostream>
#include<vector>
using namespace std;

pair<int,int>search(vector<vector<int>> a, int c , int r,int t){
    for( int i = 0 ; i<r ; i++ ){
        for( int j = 0 ; j<c ; j++ ){
            if(a[i][j]==t){
                return{i,j};
            }
        }
    }
    return{-1,-1};
}
    
int main() {
    pair<int,int>p;
    cout<<p.first<<endl;
    vector<vector<int>>v={{1,2,3},{4,5,6},{7,8,9}};
    p=search(v,3,3,10);
    cout<<p.first<<" "<<p.second<<endl;
    
    
    return 0;
}