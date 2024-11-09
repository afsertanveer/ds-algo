#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<algorithm>
#include<unordered_set>
using namespace std;
bool comparator(pair<int,int>p1, pair<int,int>p2){
    if( p1.second<p2.second) return true ;
    if( p1.second > p2.second) return false;
    if(p1.first<p2.first) return true ;
    else return false; 
}
int main() {
    int arr[5] ={3,1,5,8,2};
    sort(arr, arr+5);
    cout<<"ascending order: ";
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    sort(arr, arr+5,greater<int>());
    cout<<"descending order: ";
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    vector<int> v = {3,1,5,8,20};
    sort(v.begin(),v.end());
    cout<<"ascending order"<<endl;
    for( int val : v ){
        cout<<val<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
    cout<<"descending order"<<endl;
    for( int val : v ){
        cout<<val<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end()); // by default it will sort on the fist element
    for( auto val : vec ){
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<"base on second value of the pair comparator: "<<endl;
    sort(vec.begin(),vec.end(),comparator);
     for( auto val : vec ){
        cout<<val.first<<" "<<val.second<<endl;
    }
    vector<int> a = {1,2,3,4,5,6,7};
    reverse(a.begin(),a.end());
    for( int val : a){
        cout<<val<<" ";
    }
    cout<<endl;
    a = {1,2,3,4,5,6,7};
    cout<<"reverse in range of 2 to 5 index: "<<endl;
    reverse(a.begin()+2,a.begin()+6);
    
    for( int val : a ){
        cout<<val<<" ";
    }
    cout<<endl;
    string s = "abc";
    next_permutation(s.begin(),s.end());
    cout<<s<<endl;
    s="abc";
    prev_permutation(s.begin(),s.end());
    cout<<s<<endl;
    // cout<<endl;
    int n = 15 ;
    cout<<__builtin_popcount(n)<<endl;
    long int n2 = 15;
    cout<<__builtin_popcountl(n)<<endl;
    return 0;
}