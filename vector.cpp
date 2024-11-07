#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>vec ={1,2,3};
    vector<char>vec ={'a','b','c','d','e'};
    vector<int>vec1(3,0); //3 => size of vector , 0 each element value
    cout<<vec1[0]<<endl;
    for(int val: vec1){
        cout<<val<<endl;
    }
    cout<<"size="<<vec.size()<<endl;
    for(char val: vec){
        cout<<val<<endl;
    }
    vector<int>vec3;
    vec3.push_back(10);
    vec3.push_back(20);
    vec3.push_back(30);
    cout<<"Size after pushing back: "<<vec3.size()<<endl;
    cout<<"capacity after pushing back: "<<vec3.capacity()<<endl;
    for(int val : vec3 ){
        cout<<val<<endl;
    }

    vec3.pop_back();
    cout<<"Size after Pop back: "<<vec3.size()<<endl;
    for(int val : vec3 ){
        cout<<val<<endl;
    }

    cout<<"front: "<<vec3.front()<<endl;
    cout<<"back: "<<vec3.back()<<endl;
    cout<<"at value: "<<vec.at(2)<<endl;


    return 0;
}