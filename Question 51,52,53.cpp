#include <iostream>
using namespace std;
int size;
bool palindrome(int arr[])
{
	int cmp = 0;
	int n = ::size - 1;
	for (int i = 0; i < ::size; i++)
	{
		if (arr[i] = arr[n])
			cmp++;
		n--;
	}
	if (cmp == ::size)
		return true;
	else
		return false;
}
void doubling(int* arr)
{
	for (int i = 0; i < ::size; i++)
		arr[i] = (2 * arr[i]);
}
int exist(int arr[],int n)
{
	for (int i = 0; i < ::size; i++)
		if (arr[i] == n)
			return i;
	return -1;
}
void print(int arr[])
{
	for (int i = 0; i < ::size; i++)
		cout << arr[i] << "\t";
	cout << endl;
}
int main()
{
	int array[] = { 1,2,3,4,5,4,3,2,1 };
	::size = (sizeof(array)) / (sizeof(array[0]));
	print(array);

	if (palindrome(array))
		cout << endl << "It's palndrome.\n";
	else
		cout << endl << "It's not palndrome.\n";

	doubling(array);
	print(array);

	int n = exist(array, 5);
	if (n == -1)
		cout << "\nDoesn't exist.";
	else
		cout << "\nIt exist in index " << n << " of array.";
	
	return 0;
}
