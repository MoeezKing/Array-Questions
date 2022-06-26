//Suppose you have a character array containing 
// your name letters you have to remove the vowels
//from it and then return the array.
#include <iostream>
#include<string>
using namespace std;
int n;//size
void nameWithoutVovels(char* arr)
{
    while (arr[n] != NULL)
        n++;

    char vowels[10] = { 'A','a','E','e','I','i','O','o','U','u'};
    for (int o = 0; o < n; o++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (arr[o] == vowels[i])
            {
                for (int t = o; t < (n - 1); t++)
                    arr[t] = arr[t + 1];
                arr[n - 1] = NULL;
                o--;
            }
        }
    }
}
int main()
{
    char name[20];

    cout << "Enter your name :";
    cin.getline(name, 20);

    nameWithoutVovels(name);
    cout << "Name without vowels is ";

    for (int i = 0; i < n; i++)
        cout << name[i];

        return 0;
}
