#include <iostream>
#define size 10
using namespace std;
int Arr_mode(int arr[])
{
    int mode,rps;
    int repeat[size];
    for (int o = 0; o < size; o++)
    {
        int num = arr[o];
        int rp = 0;//how many time a number repeats
        for (int i = 0; i < size; i++)
        {
            if (num == arr[i])
                rp++;
        }
        repeat[o] = rp;
    }

    rps = repeat[0];
    mode = arr[0];
    for (int i = 0; i < size; i ++)
    {
        if (rps < repeat[i])
        {
            rps = repeat[i];
            mode = arr[i];
        }
    }
    return mode;
}
int main()
{
    int array[size] = { 1,2,1,4,3,2,2,3,4,5 };
    cout << "mode of Array is "<<Arr_mode(array);
    return 0;
}
