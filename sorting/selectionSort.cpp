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
vector<int> selectionSorting(vector<int> arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    return arr;
}

int main()
{
    vector<int> array = {4, 5, 1, 7, 3, 2};
    int size = 6;
    array = selectionSorting(array, size);
    printArray(array, size);
}