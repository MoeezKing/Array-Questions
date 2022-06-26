#include <iostream>
#define size 10
using namespace std;
int MinNum(int arr[])   //5
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
     if (min > arr[i])
     min = arr[i];
    return min;
}
int MaxNum(int arr[])   //6
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
        if (max < arr[i])
            max = arr[i];
    return max;
}
int lenght(int arr[])   //7
{   
    //int lenght = ((sizeof(arr)) / sizeof(arr[0]));
    int lenght = size;
    return lenght;
}
void instart(int *arr, int n)   //8
{
    arr[0] = n;
}
void inend(int *arr, int n) //9
{
    arr[size-1] = n;
}
void inmid(int *arr, int n)     //10
{
    if (size % 2 == 0)
    {
        arr[(size / 2)] = n;
    }
    else
    {
        arr[((size + 1) / 2) - 1] = n;
    }
}
int outmid(int arr[])   //11
{
    if (size % 2 == 0)
    {
        return arr[(size / 2)];
    }
    else
    {
        return arr[((size + 1) / 2) - 1];
    }
}
int randindex() //12
{
    int num = rand() % size;
    return num;
}
void delstart(int* arr) //13
{
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = NULL;
}
void delend(int* arr)   //14
{
    arr[size - 1] = NULL;
}
void delmid(int* arr)     //15
{
    if (size % 2 == 0)
    {
        int n = ((size) / 2);
        for (int i = n; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        if (size % 2 != 0)
        {
            int n = ((size + 1) / 2) - 1;
            for (int i = n; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
        }
        arr[size - 1] = NULL;
    }
}
    int sumarr(int arr[])   //16
{
    int sum = 0;
    for (int i = 0; i < size; i++)

        {
        sum = sum + arr[i];
    }
    return sum;
}
void print(int arr[])
{
        for (int i = 0; i < size; i++)
            cout << arr[i] << "\t";
        cout << endl;
}
int main()
{
    int array[] = { 1,2,1,4,3,2,2,3,4,5 };
    print(array);

    cout << "The minimum number of array is " << MinNum(array)<<endl;   //5

    cout << "The maximum number of array is " << MaxNum(array)<<endl;   //6

    cout << "The lenght array is " << lenght(array) << endl;    //7

    cout << "The array after inserting 10 in start will result :";  //8
    instart(array, 10);
    print(array);

    cout << "The array after inserting 10 in end will result :";    //9
    inend(array, 10);
    print(array);

    cout << "The array after inserting 10 in middle will result :"; //10
    inmid(array, 10);
    print(array);

    cout << "The middle number in array is " << outmid(array);  //11

    cout << "\nThe random index of array given by random functon is " << randindex();   //12

    cout << "\nAfter deleting first element in array :";    //13
    delstart(array);
    print(array);

    cout << "\nAfter deleting end element in array :";  //14
    delend(array);
    print(array);

    cout << "\nAfter deleting middle element in array :";   //15
    delmid(array);
    print(array);

    cout << "The sum of array elements is " << sumarr(array);   //16

    return 0;
}
