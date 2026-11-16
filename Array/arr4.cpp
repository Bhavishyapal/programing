#include <iostream>
using namespace std;

int main()
{
    int arr[9][10];

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            arr[i][j] = (i + 2) * (j + 1);
        }
    }

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << i + 2 << " * " << j + 1 << " = " << arr[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}