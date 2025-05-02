// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx =  -1 ;
Node* buildTree(vector<int>v){
    idx++;
    if(v[idx]==-1){
        return NULL ;
    }
    Node*  root = new Node(v[idx]);
    root->left = buildTree(v);
    root->right = buildTree(v);
    
    return root;
    
}

void preOrder(Node* root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root==NULL)return ;
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root==NULL)return ;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node *root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node *cur = q.front();
        q.pop();
        
        if(cur==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }
        
        cout<<cur->data<<" ";
        
        if(cur->left!=NULL){
            q.push(cur->left);
        }
        if(cur->right!=NULL){
            q.push(cur->right);
        }
    }
}

int height(Node* root){
    if(root==NULL) return 0 ;
    
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int h = leftHeight>rightHeight? leftHeight+1 : rightHeight+1 ;
    return h ;
}
int countNodes(Node* root){
    if(root==NULL) return 0 ;
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);
    
    return (leftCount+rightCount+1) ; 
}
int sumOfNodes(Node* root){
    if(root==NULL) return 0 ;
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    return (leftSum + rightSum + root->data);
}
int sumTree(Node* root){
    if(root == NULL) return 0 ;
    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);
    root->data =root->data + leftSum + rightSum;
    return root->data ;
}
int main() {
    vector<int> v ={1,2,6,-1,-1,7,-1,-1,3,4,-1,-1,5,-1,-1} ;
    Node* root = buildTree(v);
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    levelOrder(root);
    cout<<endl;
    cout<<"Height of the tree: "<<height(root)<<endl;
    cout<<"Number of nodes in the tree: "<<countNodes(root)<<endl;
    cout<<"Sum of nodes in the tree: "<<sumOfNodes(root)<<endl;
    int sumroot = sumTree(root);
    cout<<"view sum tree: "<<sumroot<<endl;
    preOrder(root);
   
    return 0;
} 