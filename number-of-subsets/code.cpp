// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>>result ;

void subsets(vector<int> n,vector<int>temp, int index){
    if(index==n.size()){
        result.push_back(temp);
        return;
    }
    temp.push_back(n[index]);
    subsets(n,temp,index+1);
    temp.pop_back();
    subsets(n,temp,index+1);
}
int main() {
    vector<int>x ={1,2,3};
    vector<int>d;
    subsets(x,d,0);
    cout<<"number of subsets: "<<result.size()<<endl;
    for( int i = 0 ; i<result.size();i++){
        for(int val : result[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}