#include <iostream>
using namespace std;
int main()
{
    int a, b, NOD, ost1, ost2;
    cin >> a;
    cin >> b;
    for (int i = 1; i <= max(a, b); i++)
    {
        ost1 = a % i;
        ost2 = b % i;
        if (ost1 == ost2)
        {
            NOD = ost1;
        }
    }
    cout << NOD;
    return 0;
}
