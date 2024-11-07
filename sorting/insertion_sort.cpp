#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
vector<int> insertionSorting(vector<int> arr, int n)
{

    for (int i = 1; i < n ; i++)
    {
        int cur = arr[i] ;
        int j = i - 1 ;
        while(j>=0 && arr[j]>cur){
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = cur ;
    }
    return arr;
}

int main()
{
    vector<int> array = {4, 5, 1, 7, 3, 2};
    int size = 6;
    array = insertionSorting(array, size);
    printArray(array, size);
}