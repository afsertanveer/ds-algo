#include <iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n ){
    if(n==0 || n==1){
        return true ;
    }
    
    return arr[n-1]>=arr[n-2] && isSorted(arr,n-1);
}

int main() {
    vector<int> v = {1,2,3,6,50};
    cout<<isSorted(v,v.size());
    return 0;
}