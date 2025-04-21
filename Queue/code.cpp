#include <iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int v){
        data = v;
        next = NULL;
    }
};

class Queue{
public:
    Node* head ;
    Node* tail ;
    Queue(){
        head = tail = NULL;
    }
    void push(int a){
        Node* newNode = new Node(a);
        if(empty()){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop(){
        if(empty()){
            cout<<"Queue is empty";
        }else{
            Node* temp = head ;
            head = head->next ;
            delete temp;
        }
    }
    int front(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return -1 ;
        }
        return head->data;
    }
    bool empty(){
        return head==NULL;
    }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}