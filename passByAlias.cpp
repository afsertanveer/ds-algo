#include<iostream>
#include<vector>
using namespace std ;

void changeA( int &b){
      b = 20 ;
}

int main(){
   
    int a = 10  ;
    changeA( a) ;
    cout<<"inside of b main fnx: "<<a<<endl;
    return 0 ;
}