#include <iostream>
using namespace std;
bool prime(int num)
{
    int div = num / 2;
    int p = 0;
    for (int i = 1; i <= div; i++)
        if (num % i == 0)
            p++;
    if (p == 1)
        return true;
    else
        return false;
}
int* prime_array(int n)
{
    static int* primeArr = new int[n];
    int count = 0;
    int i = 2;
    while(count < n)
    {
        if (prime(i))
        {
            primeArr[count] = i;
            count++;
        }
        i++;
    }
    return primeArr;
}
int main()
{
    int * array;
    int number;
    cout << "How many prime elements are required : ";
    cin >> number;
    array=prime_array(number);
    cout << "\nPrime number array is as follow\n ";
    for (int i = 0; i < number; i++)
        cout << array[i] << "  ";
    delete[]array;
    return 0;
}
