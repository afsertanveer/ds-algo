#include <iostream>
using namespace std;

int reverseNumber(int a){
    int sum = 0 ;
    while(a!=0){
        sum = sum*10 ;
        int m = a%10;
        sum = sum + m ;
        a = a / 10 ;
    }
    return sum;
}
    
int main() {
    
    cout<<reverseNumber(3456)<<endl;
    
    
    return 0;
}