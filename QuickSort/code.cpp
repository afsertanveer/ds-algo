// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>

using namespace std;

int partition(vector<int>& arr, int st ,int end){
    int pivot = arr[end];
    int idx = st-1;
    for( int j = st; j<end ; j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    
    return idx;
}

void quickSort(vector<int>& arr, int st, int end){
    if(st<end){
        int pivotIndex = partition(arr,st,end);
        quickSort(arr,st,pivotIndex-1);
        quickSort(arr,pivotIndex,end);
    }
}
int main() {
    vector<int>arr ={12,31,35,2,17};
    quickSort(arr,0,arr.size()-1);
    for( int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}