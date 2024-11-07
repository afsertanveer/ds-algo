#include<iostream>
#include<vector>
using namespace std ;


int binarySearch( vector<int> arr, int target, int start, int end ){
    int mid = start/2 + end/2 ; // 
    if( start > end ) return -1 ;
    if( arr[mid] == target) return mid ;
    if( arr[mid] > target ) return binarySearch( arr, target, start, mid -1 );
    else if( arr[mid] < target ) return binarySearch( arr, target, mid + 1 , end );

}

int main(){
  
  vector<int> arr1 = { -1,0,3,4,5,9,12};
  int tar1 = 12 ;
  vector<int> arr2 = { -1 , 0 , 3 , 5 , 9 , 12};
  int tar2 =  0 ;
  cout<<"recursive: "<<binarySearch(arr1, tar1, 0 , arr1.size() - 1 )<<endl;
  cout<<binarySearch(arr2, tar2, 0 , arr2.size() - 1)<<endl;

  return 0 ;
}