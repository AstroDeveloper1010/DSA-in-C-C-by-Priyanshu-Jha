/* We are going to insert an element at z index in an array of size n */

#define N 5
/*
  here I have used this #define N 5 but if you know the size of the array you can directly write
  int arr[5] instead of #define N 5
*/
#include <iostream>
using namespace std;

int main()
{
    int arr[N];
    // taking elements in the array
    for (int i = 0; i < (N - 1); i++)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
    }
    // printing the array before insertion
    for (int i = 0; i < (N - 1); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // shifting elements at index 'i' to 'i+1'
    for (int i = 3; i >= 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    cout << endl;
    // inserting element '9' at index '1'
    arr[1] = 9;
    cout << "Insertion successful" << endl;
    // printing the array after insertion
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
