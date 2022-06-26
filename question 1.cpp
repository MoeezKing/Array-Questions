#include <iostream>
#include<string>
#define size 10
using namespace std;
void Arr_PrintArray(int array[])
{
    for (int i = 0; i < size; i++)
        cout << array[i] << endl;
}
void Arr_PrintArray(string array[])
{
    for (int i = 0; i < size; i++)
        cout << array[i] << endl;
}
int main()
{
    int A[size] = { 99,48,34,57,65,23,54,22,43,21 };
    int B[size];
    for (int i = 0; i < size; i++)
        B[i] = A[i];
    string C[size] = { "Abdul","Owais","Asad","Talal","Ali","Azhar","Samo","Bakr","Umer" };
    Arr_PrintArray(B);
    Arr_PrintArray(C);

    return 0;
}
