#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int main() {
    map<string,int>mp;
    mp["tv"] = 50;
    mp["laptop"] = 100;
    mp["headphone"]=50;
    mp["tablet"]=150;
    mp["watch"]=50;
    mp.insert({"camera",25});
    mp.emplace("mouse",1000);
    for(auto p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    mp.erase("mouse");
    for(auto p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    if(mp.find("camera")!=mp.end()){
        cout<<"found\n";
    }else{
        cout<<"not found\n";
    }
    return 0;
}