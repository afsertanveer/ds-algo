#include<iostream>
#include<vector>
using namespace std ;


int binarySearch( vector<int> arr, int target){
    int start = 0 , end = arr.size() - 1 ;
    while( start<=end ){
        int mid = start/2 + end/2  ;
        if( arr[mid] > target ){
            end = mid - 1 ;
        }else if( arr[mid] < target ){
            start = mid + 1 ;
        }else{
            return mid ;
        }
    }
    return -1 ;
}

int main(){
  
  vector<int> arr1 = { -1,0,3,4,5,9,12};
  int tar = 12 ;
  vector<int> arr2 = { -1 , 0 , 3 , 5 , 9 , 12};
  int tar2 =  0 ;
  cout<<binarySearch(arr1,tar)<<endl;
  cout<<binarySearch(arr2,tar2)<<endl;

  return 0 ;
}