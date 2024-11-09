#include <iostream>
#include<string>
#include <cstring>

using namespace std;

int main() {
    char str[] = {'a','b','c','\0'};
    cout<<str<<endl;
    cout<<strlen(str)<<endl;
    char a[]="hello";
    cout<<a<<endl;
    a[1]='a';
    cout<<a<<endl;
    char inp[100],inp2[100];
    // cin.getline(inp,100,'$'); taking input with deliminator
    cout<<inp<<endl;
    int len = 0;
    cin.getline(inp2,100);
    for( int i = 0 ; inp2[i]!='\0' ; i++){
        cout<<inp2[i]<<" ";
        len++;
    }
    cout<<endl;
    cout<<"length: "<<len<<endl;
    return 0 ;
}