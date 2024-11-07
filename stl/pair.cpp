#include <iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main() {
    pair<string,int> a = {"afser",3};
    pair<string,pair<int,int>> pp = {"afser",{1,2}};
    cout<<pp.first<<endl;
    cout<<pp.second.first<<endl;
    cout<<pp.second.second<<endl;
    cout<<endl;
    vector<pair<int,int>>vec={{1,2},{3,4}};
    for( int i = 0 ; i < vec.size() ; i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    vec.push_back({1,5});
    vec.emplace_back(6,5);
    for( int i = 0 ; i < vec.size() ; i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    return 0;
}