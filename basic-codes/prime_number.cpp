#include <iostream>
using namespace std;

string isPrime(int n ){
    for( int i = 2 ; i*i<n ; i++ ){
        if( n % i == 0 ){
            return "not prime" ;
        }
    }
    return "prime";
}
int main() {
    
    int n  ;
    cout<<"Input: ";
    cin>>n;
    string result = isPrime(n);
    cout<<result<<endl;

    return 0;
}