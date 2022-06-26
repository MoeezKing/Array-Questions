#include <iostream>
#define size 5
using namespace std;

void Arr_ReverseArray(int arr1[], int* arr2)//giving parameters by reference & not need to return array. 
{
	int num = size - 1;
	for (int t = 0; t < size; t++)
	{
		arr2[num] = arr1[t];
		num--;
	}
}
int main()
{
	int a[size] = { 1,22,31,4,55 };
	int b[size];
	Arr_ReverseArray(a, b);
	for (int i = 0; i < size; i++)
		cout << a[i] << "\t";
	cout << endl;
	for (int i = 0; i < size; i++)
		cout << b[i] << "\t";

	return 0;
}
