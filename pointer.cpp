#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int a = 10 ;
    int* ptr = &a ;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<&ptr<<endl;
    int** ptr2 = &ptr ;
    cout<<ptr2<<endl;
    cout<<&ptr2<<endl;
    cout<<**(ptr)<<endl; //dereference operator, collects the stored value from the address 

    return 0 ;
}