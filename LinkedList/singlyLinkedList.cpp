// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;
  
  Node(int v){
      data = v;
  }
};
class List{
  Node *head;
  Node *tail;
public:
  List(){
      head=tail=NULL;
  }
  
  void push_front(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = tail = newNode;
        return;
    }else{
        newNode->next = head;
        head = newNode;
    }
  }
  void push_back(int val){
      Node* newNode = new Node(val);
      if(head==NULL){
          newNode->next = head;
          head = newNode;
      }else{
          tail->next = newNode;
          tail = newNode;
      }
  }
  void push_by_pos(int val,int pos){
      if(pos<0){
          cout<<"Position cannot be negative"<<endl;
          return;
      }
      if(pos==0){
          push_front(val);
          return;
      }
      if(head==NULL){
          cout<<"Already empty"<<endl;
      }
      int c = 0 ;
      Node* newNode = new Node(val);
      Node* temp = head;
      for(int i = 0 ; i<pos-1; i++){
          temp = temp->next;
          if(temp==NULL){
              cout<<"cannot insert into this position"<<endl;
              return;
          }
      }
      newNode->next = temp->next;
      temp->next = newNode ;
      
  }
  void pop_front(){
      if(head==NULL){
          cout<<"Already empty"<<endl;
          return;
      }else{
        Node* temp = head;
          head = head->next;
          temp->next = NULL;
          delete temp;
      }
  }
  void pop_back(){
      if(tail==NULL){
          cout<<"Already Empty"<<endl;
          return;
      }
      Node* temp = head;
      while(temp->next!=tail){
          temp = temp->next;
      }
      temp->next = NULL;
      delete tail;
      tail = temp;
      
      
  }
  int search(int val){
      Node* temp = head;
      int c = 0 ;
      while(temp!=NULL){
          if(temp->data==val){
              return c;
          }
          temp = temp->next;
          c++;
      }
      return -1 ;
  }
  void print(){
      Node* temp = head;
      while(temp!=NULL){
          cout<<temp->data<<" ";
          temp = temp->next;
      }
      cout<<endl;
  }
  
};

int main() {
    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(6);
    l1.push_by_pos(7,2);
    l1.pop_front();
    l1.pop_back();
    l1.print();
    cout<<l1.search(7)<<endl;
    return 0;
}