#include <iostream>
using namespace std;

bool isArmStrongNumber(int n ){
    int temp = n ;
    int sum = 0 ;
    while(n!=0){
        int m = n%10 ;
        sum = sum + (m*m*m) ;
        n = n / 10 ;
    }
    cout<<sum<<endl;
    return temp==sum ;
}
int main() {
    
    int n = 153  ;
    bool result; 
    result = isArmStrongNumber(n);
    if(result){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}