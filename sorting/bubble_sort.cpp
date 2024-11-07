#include<iostream>
#include<vector>
using namespace std;

vector<int> bubbleSorting(vector<int> arr,int n){
    bool isSwap ;
    for( int i = 0 ; i<n ; i++ ){
        isSwap = false ;
        for( int j = 0 ; j<n-i-1 ; j++ ){
            if(arr[j]>arr[j+1]){
                isSwap = true ;
                swap(arr[j],arr[j+1]);
            }
        }
        if(isSwap == false ){
            break ;
        }
    }
    return arr;
    
}

void printArray( vector<int> arr , int n){
    for( int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> array={4,5,1,7,3,2};
    int size = 6 ;
    array =bubbleSorting(array,size);
    printArray(array,size);


}