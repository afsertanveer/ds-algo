#include <iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main() {
    // Write C++ code here
    deque<int> l ;
    l.push_back(1);
    l.push_back(3);
    l.push_back(4);
    l.push_front(2);
    for( int val : l ){
        cout<<val<<" ";
    }
    l.pop_back();
    l.pop_front();
    cout<<endl;
    for( int val : l ){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}