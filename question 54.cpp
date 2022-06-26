#include <iostream>
using namespace std;
int size1;
int size2;
int size_comm;
int* common(int arr1[], int arr2[])
{
    int n = 0;
    for (int o = 0; o < ::size1; o++)   //nested loop to find total number of elements which are common.
    {
        for (int i = 0; i < ::size2; i++)
        {
            if (arr1[o] == arr2[i]) //if any element is common then increament in n is done.
            {
                n++;
                break;          //using break to avoid the repeatation of a common number.  
            }
        }
    }
    ::size_comm = n;    //size of common elements array is intialized from variable n.
    static int* arr_comm = new int[n];  //A static integer type dynammic array is declared of size n. 
    n = 0;      //now we are going to use n as index of dynammic array 

    for (int o = 0; o < ::size1; o++)///nested loop is used to store the common elements in new dynammic array.
    {
        for (int i = 0; i < ::size2; i++)
        {
            if (arr1[o] == arr2[i])     //elements which are common are stored.
            {
                arr_comm[n] = arr1[o];
                n++;
                break;          //break to avoid the repeatation  of an common element .
            }
        }
    }

    return arr_comm;
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout << arr[i] << "\t";
    cout << endl;
}
int main()
{
    int  array1[] = { 1,2,3,4,100,6,7,99,9,10 };
    int array2[] = { 10,9,8,7,6,15,4,2022,1 };
    ::size1 = (sizeof(array1) / sizeof(array1[0]));
    ::size2 = (sizeof(array2) / sizeof(array2[0]));

    int* ptr_com;
    ptr_com = common(array1, array2);

    cout << "1st array is \n";
    print(array1, ::size1);

    cout << "\n2nd array is \n";
    print(array2, ::size2);

    cout << "\nCommon elements in both array are :\n";
    for (int i = 0; i < ::size_comm; i++)
        cout << ptr_com[i] << "\t";

    delete[]ptr_com;

    return 0;
}
