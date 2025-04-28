#include <iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data = val ;
        left = right = NULL ;
    }
};
static int idx = -1 ;
Node* buildTree(vector<int>p){
    idx++ ;
    if(p[idx]==-1) return NULL;
    
    Node* root = new Node(p[idx]);
    root->left = buildTree(p);
    root->right = buildTree(p);
    
    return root ;
    
}

void levelOrder(Node* root){
    if( root == NULL ) return ;
    
    cout<<root->data<<" ";
    levelOrder(root->left);
    levelOrder(root->right);
}
void topView(Node* root){
    queue<pair<Node*,int>> q;
    map<int,int>m;
    q.push({root,0}) ;
    while(q.size()>0){
        Node* cur = q.front().first;
        int curHD = q.front().second;
        q.pop();
        if(m.find(curHD)==m.end()){
            m[curHD] = cur->data;
        }
        if(cur->left!=NULL){
            q.push({cur->left,curHD-1});
        }
        if(cur->right!=NULL){
            q.push({cur->right,curHD+1});
        }
    }
    for(auto it : m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}
int main() {
    vector<int> v = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(v);
    levelOrder(root);
    cout<<"\nTop View: \n";
    topView(root);
    return 0;
}