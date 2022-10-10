/* C++ program to do binary search to find an element in an array */

/*
  For binary search an array must be sorted if it is unsorted then it is better to use linear search or do bubble sorting to sort the array
*/

#include <iostream>
using namespace std;

void binarySearch(int arr[], int first, int last, int mid, int element)
{
    if (arr[first] == element)
    {
        cout << "Element found at index " << first;
    }
    else if (arr[last] == element)
    {
        cout << "Element found at index " << last;
    }
    else if (arr[mid] = element)
    {
        cout << "Element found at index " << mid;
    }
    else if (element > arr[mid])
    {
        first = mid;
        //using recusion
        binarySearch(arr, first, last, mid, element);
    }
    else if (element < arr[mid])
    {
        last = mid;
        //using recursion
        binarySearch(arr, first, last, mid, element);
    }
}

int main()
{
    // create a sorted array
    int arr[10] = {1, 4, 5, 6, 9, 15, 18, 24, 30, 100};
    // finding the size of array
    int size = sizeof(arr) / sizeof(arr[0]);
    // finding element '18' in the array
    int first = 0, last = size, mid = (first + last) / 2;
    int element = 18;
    binarySearch(arr, first, last, mid, element);

    return 0;
}
