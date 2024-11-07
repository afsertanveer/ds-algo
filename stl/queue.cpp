#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main() {
    queue<int>s;
    queue<int>s2;
    s.push(1);
    s.push(2);
    s.push(3);
    s2.swap(s);
    cout<<"after swapping size of s : "<<s.size()<<endl;
    cout<<"front : "<<s2.front()<<endl;
    while(!s2.empty()){
        cout<<"front : "<<s2.front();
        s2.pop();
        cout<<" ";
    }
    cout<<endl;
    return 0;
}