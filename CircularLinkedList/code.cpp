#include <iostream>
using namespace std;

class Node{
public :
    int data;
    Node* next;
    Node(int val){
        data = val ;
    }
};

class CircularList{
    Node* head;
    Node* tail;
    
public:
    CircularList(){
        head = tail = NULL;
    }
    void inserAtHead(int val){
        Node* newNode = new Node(val);
        if(tail==NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void inserAtTail(int val ){
        Node* newNode = new Node(val);
        if(tail==NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            
            newNode->next = head; 
            tail->next = newNode;
            tail = newNode;
        }
    }
    void deleteAtHead(){
        if(head==NULL)return;
        Node* temp = head;
        if(head->next==head){
            delete temp;
            head =tail = NULL;
        }else{
            head = temp->next ;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
        
    }
    void deleteAtTail(){
        if(head==NULL)return;
        if(head->next==head){
            delete head;
            head =tail = NULL;
        }else{
            Node* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next = head;
            tail->next = NULL;
            delete tail;
            tail = temp;
        }
        
    }
    void print(){
        if(head==NULL) {
            cout<<"List is empty"<<endl;
            return;
        }
        cout<<head->data<<"->";
        Node* temp = head->next;
        while(temp!= head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
};

int main() 
{
    CircularList cl1;
    cl1.inserAtTail(0);
    cl1.deleteAtHead();
    cl1.inserAtHead(3);
    cl1.inserAtHead(2);
    cl1.deleteAtHead();
    cl1.inserAtHead(1);
    cl1.inserAtTail(4);
    cl1.inserAtTail(5);
    cl1.inserAtTail(6);
    cl1.deleteAtTail();
    cl1.print();
    

    return 0;
}