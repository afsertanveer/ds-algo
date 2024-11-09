#include <iostream>

using namespace std;
int main() {
    string a ="afser";
    string b ="afser";
    if(a==b){
        cout<<"matched"<<endl;
    }
    string str1 = "afser";
    string str2 = "tanveer";
    cout<<(str1<str2)<<endl;
    cout<<"length: "<<str2.length()<<endl;
    string inp;
    getline(cin,inp);
    cout<<"input: "<<inp<<endl;
    for( int i = 0 ; i<a.length() ; i++ ){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for( char ch : b){
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}