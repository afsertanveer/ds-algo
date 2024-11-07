#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;

int main() {
    stack<int>s;
    stack<int>s2;
    s.push(1);
    s.push(2);
    s.push(3);
    s2.swap(s);
    cout<<"after swapping size of s : "<<s.size()<<endl;
    cout<<"top : "<<s2.top()<<endl;
    while(!s2.empty()){
        cout<<"top : "<<s2.top();
        s2.pop();
        cout<<" ";
    }
    cout<<endl;
    return 0;
}