//Write a function to return the array of n integers with fibonacci numbers.
#include <iostream>
using namespace std;
int* fibonacci(int n)
{
    static int* fibnum = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            fibnum[i] = i;
        }
        else
        {
            fibnum[i] = fibnum[i - 2] + fibnum[i - 1];
        }
    }
    return fibnum;
}
int main()
{
    cout << "How many elements of fibonaccci series is required in a array :";
    int num, * array;
    cin >> num;
    array = fibonacci(num);
    cout << "\n The array of required numder of fibonacci series is as follow :\n";
    for (int i = 0; i < num; i++)
        cout << array[i] << "\t";

    delete[]array;



    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
