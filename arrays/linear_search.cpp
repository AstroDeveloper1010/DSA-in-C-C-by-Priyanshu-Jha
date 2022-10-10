/* In this program we are going to do linear search to find an element in an array */

/*
  We can do linear search on both sorted and unsorted arrays
  But if the array is sorted we should prefer binary search for less time complexity
  In case you want to do binary search on an unsorted array then first you need to sort the array using a sorting algorithm like bubble sorting
*/

#include <iostream>
using namespace std;

int main()
{
    // create a sorted array
    int arr[5] = {1, 4, 5, 6, 9}, index, size;
    // finding the size of array
    size = sizeof(arr) / sizeof(arr[0]);
    // finding element '6' in the array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 9)
        {
            index = i;
        }
        else
        {
            index = (size + 1);
        }
    }
    // printing the index of '9'
    if (index == (size + 1))
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index " << index;
    }

    return 0;
}
