#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl;
    int arr1[] = {1, 4, 5};
    //   arr = arr1 ; cannot be done since array pointer is constant pointer
    //   arr = NULL;

    cout << *arr << endl;
    cout << *(arr + 2) << endl;

    //   int a = 15;
    int* ptr1 ;
    int* ptr2 = ptr1 + 2 ;
    cout<<ptr2-ptr1<<endl;

        return 0;
}