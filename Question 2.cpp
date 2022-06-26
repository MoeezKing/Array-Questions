#include<string>
#include <iostream>
#define size 10
using namespace std;
void Arr_copy(int arr1[], int* arr)
{
    for (int i = 0; i < size; i++)
        arr[i] = arr1[i];
}
void Arr_copy(string arr1[], string* arr)
{
    for (int i = 0; i < size; i++)
        arr[i] = arr1[i];
}
int main()
{
    int A[size] = { 99,48,34,57,65,23,54,22,43,21 };
    int B[size];
    Arr_copy(A,B);
    for (int i = 0; i < size; i++)
        cout<<B[i]<<endl;
    string C[size] = { "Abdul","Owais","Asad","Talal","Ali","Azhar","Samo","Bakr","Umer" };
    string D[size];
    Arr_copy(C, D);
    for (int i = 0; i < size; i++)
        cout << D[i] << endl;
	return 0;
}
