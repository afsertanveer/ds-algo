// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int celebrity(vector<vector<int>>a){
    int n = a.size();
    stack<int>s;
    for(int i = 0 ; i<n ; i++){
        s.push(i);
    }
    int i,j;
    while(s.size()>1){
        i = s.top();
        s.pop();
        j = s.top();
        s.pop();
        if(a[i][j]==0){
            s.push(i);
        }else{
            s.push(j);
        }
    }
    int celeb = s.top();
    for( int i = 0 ; i<n ; i++){
        if(i!=celeb && (a[i][celeb]==0 || a[celeb][i]==1)){
            return -1 ;
        }
    }
    return s.top();
}
int main() {
    vector<vector<int>> c = {{0,1,0},{1,0,0},{0,1,0}};
    cout<<"celebrity: " <<celebrity(c)<<endl;
    return 0;
} 