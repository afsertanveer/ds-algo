#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
using namespace std;

int main() {
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    cout<<"lower bound = "<<*(s.lower_bound(4))<<endl;
    cout<<"upper bound = "<<*(s.upper_bound(4))<<endl;
    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    multiset<int>s2;
    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    s2.insert(4);
    s2.insert(5);
    s2.insert(6);
    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    cout<<"multi set: "<<endl;
    for(auto val:s2){
        cout<<val<<" ";
    }
    cout<<endl;
    unordered_set<int>us;
    us.insert(10);
    us.insert(5);
    us.insert(9);
    us.insert(6);
    cout<<"unordered set: "<<endl;
    for( int val : us){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}