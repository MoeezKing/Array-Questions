#include <iostream>
using namespace std;
bool isEquivalent(int arr1[], int size1, int arr2[],int size2)
{
    int cmp = 0;
    for (int o = 0; o < size1; o++)
    {
        for (int i = 0; i < size2; i++)
        {
            if (arr1[o] == arr2[i])
            {
                cmp++;
                break;
            }
        }
    }
    if (cmp == size1)
        return true;
    else
        return false;
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;
}
int main()
{
    int array1[] = { 1 , 2 ,3 ,3,4,4 , 5 };
    int array2[] = { 2, 1, 3, 4, 5 };

    cout << "1st array is :\n";
    print(array1, (sizeof(array1) / sizeof(array1[0])));
    cout << "2nd array is :\n";
    print(array2, (sizeof(array2) / sizeof(array2[2])));

    if (isEquivalent(array1, (sizeof(array1) / sizeof(array1[0])), array2, (sizeof(array2) / sizeof(array2[2]))))
        cout << "\nBoth arrays are Equal";
    else
        cout << "\nBoth arrays are not Equal";
    return 0;
}
