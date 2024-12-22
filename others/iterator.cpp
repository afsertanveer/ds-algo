#include <iostream>
#include<vector>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> d ={ 1,2,3,4,5,6}; 
    vector<int>::iterator it ;
    for( it = d.begin() ; it!=d.end() ; it++ ){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    vector<int>::reverse_iterator it2;
    for( it2 = d.rbegin() ; it2!=d.rend() ; it2++ ){
        cout<<*(it2)<<" ";
    }
    cout<<endl;
    for( auto it3 = d.rbegin() ; it3!=d.rend() ; it3++ ){
        cout<<*(it3)<<" ";
    }
    cout<<endl;
    return 0;
}