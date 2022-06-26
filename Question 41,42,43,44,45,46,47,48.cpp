#include <iostream>
using namespace std;
int size;
void sort(int* arr)     //41
{
    reinput:
    cout << "\nEnter 1 to sort in Ascending order: \nEnter 2 to sort in descending order :-";
    int n;
    cin >> n;
    if (n == 1)
    {
        for (int o = 0; o < ::size; o++)
        {
            for (int i = 0; i < ::size - 1; i++)
                if (arr[i] > arr[i + 1])
                    swap(arr[i], arr[i + 1]);
        }
    }
    else if(n == 2)
    {
        for (int o = 0; o < ::size; o++)
        {
            for (int i = 0; i < ::size - 1; i++)
                if (arr[i] < arr[i + 1])
                    swap(arr[i], arr[i + 1]);
        }
    }
    else
        goto reinput;
}
float median(int arr[])        //42
{
    if (::size % 2 == 0)
    {     //If n is even then Median (M) = value of [((n)/2)th item term + ((n)/2 + 1)th item term ]/2                  
        int a,b;
        a = arr[(::size) / 2];
        b = arr[((::size)+1) / 2];
        float med = (a + b) / 2;
        return med;
    }
    else
    {     //If n is odd then Median (M) = value of ((n + 1)/2)th item term.
        float med = arr[(::size) / 2];
        return med;
    }
}
bool doesExist(int arr[], int n)       //43
{
    int exist = 0;
    for (int i = 0; i < ::size; i++)
        if (n == arr[i])
            exist++;
    if (exist != 0)
        return true;
    else
        return false;
}
int count(int arr[], int n)     //44
{
    int cont = 0;
    for (int i = 0; i < ::size; i++)
        if (n == arr[i])
            cont++;

    return cont;
}
bool empty(int arr[])   //45
{
    int emty = 0;
    for (int i = 0; i < ::size; i++)
        if (arr[i]==0)
            emty++;
    if (emty != 0)
        return true;
    else
        return false;
}
bool full(int arr[])       //46
{
    int Full = 0;
    for (int i = 0; i < ::size; i++)
        if (arr[i] != 0)
            Full++;
    if (Full == (::size))
        return true;
    else
        return false;
}
void insert(int* arr,int i,int n)      //47
{
    if (i < ::size)
        arr[i] = n;
    else
        cout << "\nThe index is out of range.\n";
}
void insertnext(int* arr, int i, int n)     //48
{
    if (i < ::size-1)
        arr[i+1] = n;
    else
        cout << "\nThe index is out of range or you had given last index.\n";
}
void print(int arr[])
{
    for (int i = 0; i < ::size; i++)
        cout << arr[i] << "\t";
    cout << endl;
}
int main()
{
    int array[] = { 99,48,34,57,65,23,54,22,43,21 };
    ::size = (sizeof(array)) / (sizeof(array[0]));
    print(array);

    sort(array);
    print(array);

    cout<<"\nthe median of the array is :"<< median(array)<<endl;

    if (doesExist(array, 22))
        cout << "\nIt exists.\n";
    else
        cout << "\nDoesn't exist.\n";

    cout << "The number " << 21 << " exists " << count(array, 21)<<" times ." << endl;

    if (empty(array))
        cout << "\nIt's empty.\n";
    else
        cout << "\nDoesn't empty.\n";

    if (full(array))
        cout << "\nIt's Full.\n";
    else
        cout << "\nDoesn't full.\n";

    insert(array, 9, 100);
    print(array);

    insertnext(array, 5, 200);
    print(array);
    return 0;
}
