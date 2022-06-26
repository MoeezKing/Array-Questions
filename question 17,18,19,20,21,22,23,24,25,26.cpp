#include <iostream>
using namespace std;
int size;
int sizelessavg;
int sizesubstrg;
float avgarr(int arr[])     //17
{
    int sum = 0;
    for (int i = 0; i < ::size; i++)
    {
        sum = sum + arr[i];
    }
    float avg = sum / (::size);
    return avg;
}
int* lessavg(int arr[])            //18
{   //returning pointer as we need an array of elements
    int avg = avgarr(arr);      //calling avgarr function to get the average of number
    int n = 0;      //varible used to calculate first the numbers of elements less then average.
    for (int i = 0; i < (::size); i++)  //running loop to identify the numbers of elements less then average..
        if (arr[i] < avg)
            n++;

    ::sizelessavg = n;  //assigning the size of new array

    static int* lessavgA = new int[::sizelessavg];  //returning static integer type dynammic array of size as specify.
    n = 0;  //now using as index of dynammic array
    for (int i = 0; i < ::size; i++)    //storing elemnts less then average in dynammic array
    {
        if (arr[i] < avg)
        {
            lessavgA[n] = arr[i];
            n++;
        }
    }
    return lessavgA;    //returnig dynammic array
}

bool even(int n)    //even finder
{
    if (n % 2 == 0)
        return true;
    else
        return false;
}
bool prime(int n)   //prime finder
{
    int div = n / 2;
    int p=0;
    for (int i = 1; i <= div; i++)
    {
        if (n % i == 0)
            p++;
    }
    if (p == 1)
        return true;
    else
        return false;
}
int teven(int arr[])        //19
{
    int toteven = 0;
    for (int i = 0; i < ::size; i++)
    {
        if (even(arr[i]))
            toteven++;
    }
    return toteven;
}
int tprime(int arr[])       //20
{
    int totprime = 0;
    for (int i = 0; i < ::size; i++)
    {
        if (prime(arr[i]))
            totprime++;
    }
    return totprime;
}
int* substring(int arr[])                //21
{   
    srand(5);   //setting intial for rand()
    int n = rand() % 10;    //extracting last dight 
    ::sizesubstrg = n;      //setting the size of subtring in global variable
    static int* substr = new int[n];     //returning static integer type dynammic array of size as specify.
    for (int i = 0; i < n; i++) //storing value in substr
    {
        substr[i] = arr[i];
    }

    return substr;
}
bool equseq(int arr1[], int arr2[])     //22
{
    int cmp = 0;
    for (int i = 0; i < ::size; i++)
    {
        if (arr1[i] == arr2[i])
            cmp++;
    }
    if (cmp == (::size))
        return true;
    else
        return false;
}

bool equnum(int arr1[], int arr2[])     //23
{
    int cmp = 0;
    for (int o = 0; o < (::size); o++)
    {
        for (int i = 0; i < (::size); i++)
            if (arr1[o] == arr2[i])
                cmp++;
    }
    if (cmp >= (::size))
        return true;
    else
        return false;
}
int filter(int arr[])   //24
{
    for (int i = 0; i < ::size; i++)
        if (even(arr[i]) && prime(arr[i]))  //An element will be filter if it is both even and odd.
            return arr[i];

    return NULL;
}
int leastdiffco(int arr[])      //25
{
    int ld = arr[1] - arr[0];
    for (int i = 1; i < (::size - 1); i++)
    {
        int dif = arr[i + 1] - arr[i];
        if (ld > dif)
            ld = dif;
    }
    return ld;
}
int leastdiff(int arr[])    //26
{
    int ld = arr[1] - arr[0];
    for (int i = 0; i < (::size); i++)
    {
        for (int o = 0; o < (::size); o++)
        {
            int dif = arr[i] - arr[o];
            if (ld > dif)
                ld = dif;
        }
    }
    return ld;
}

int main()
{
    int array[] = { 99,48,34,57,65,23,54,22,43,21 };
    ::size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < ::size; i++)
        cout << array[i] << "\t";
    cout << endl;

    cout << "THe average of the array is " << avgarr(array)<<endl;
    
    int* p;
    p = lessavg(array);
    cout << "Elements less then average are :\n";
    for (int i = 0; i < ::sizelessavg; i++)
        cout << p[i] << "\t";
    cout << endl;
    delete[]p;

    cout << "Total numbers of even in the array is " << teven(array)<<endl;
    cout << "Total numbers of prime in the array is " << tprime(array) << endl;

    int* m;
    m = substring(array);
    cout << "substring :\n";
    for (int i = 0; i < ::sizesubstrg; i++)
        cout << m[i] << "\t";
    cout << endl;
    delete[]m;

    if (equseq(array, array))
        cout << "Equal in sequence.\n";
    else
        cout << "Not equal in sequence\n";

    if (equnum(array, array))
        cout << "Equal in numbers.\n";
    else
        cout << "Not equal in numbers\n";

    cout << "The number which is even as well as odd in array: " << filter(array)<<endl;

    cout << "Least Difference between any consecutive numbers :" << leastdiffco(array)<<endl;

    cout << "Least Difference between any numbers :" << leastdiff(array) << endl;


    return 0;
}
