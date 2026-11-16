#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int largest, smallest;

    cout << "Enter 20 elements: ";

    // Input 20 elements
    for(int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }

    // Initialize largest and smallest
    largest = arr[0];
    smallest = arr[0];

    // Print elements and find largest and smallest
    cout << "\nArray elements are: ";

    for(int i = 0; i < 20; i++)
    {
        cout << arr[i] << " ";

        if(arr[i] > largest)
        {
            largest = arr[i];
        }

        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "\nBiggest element = " << largest;
    cout << "\nSmallest element = " << smallest;

    return 0;
}