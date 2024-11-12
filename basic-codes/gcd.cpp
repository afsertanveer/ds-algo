#include <iostream>
using namespace std;

int gcd(int a , int b){
    while(a>0 && b>0){
        if(a>b){
            a= a%b;
        }else{
            b = b % a;
        }        
    }
    if( a == 0 ) return b;
    return a ;
}
int gcdRecur(int a , int b ){
    if(b==0) return a;
    if( a== 0) return b;
    if(a>b) return gcdRecur(a%b,b);
    else return gcdRecur(a,b%a);
}
int lcm(int a , int b){
    int r = gcdRecur(a,b);
    return ( (a*b)/r);
    
}
    
int main() {
    
    int result = gcd(171,29);
    cout<<result<<endl;
    cout<<gcdRecur(30,40)<<endl;
    cout<<lcm(20,28)<<endl;
    
    return 0;
}