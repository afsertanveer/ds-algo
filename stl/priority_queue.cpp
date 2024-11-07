#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main() {
    // priority_queue<int>q;
    priority_queue<int,vector<int>,greater<int>>q; //min heap
    q.push(5);
    q.push(1);
    q.push(3);
    q.push(10);
    cout<<"top value : "<<q.top()<<endl;
    cout<<endl;
    return 0;
}