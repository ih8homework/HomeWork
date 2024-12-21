#include <iostream>
using namespace std;
int main()
{
    int temp, s, a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    s = size(a) - 1;
    for (int i = 0; i <= s / 2; i++)
    {
        temp = a[i];
        a[i] = a[s - i];
        a[s - i] = temp;
    }
    for (int i : a)
    {
        cout << i;
    }
    return 0;
}