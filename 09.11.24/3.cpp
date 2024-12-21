#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a;
    vector<int> num = {1, 6, 6, 4, 4, 3, 1, 7, 6, 4, 8};
    vector<int>::iterator i, n;
    a = num[0];
    for (n = num.begin(); n != num.end(); n++)
    {
        int f = 0;
        for (i = num.begin(); i != num.end(); i++)
        {
            if (*n == *i)
            {
                f++;
                if (f > 1)
                {
                    num.erase(i);
                }
            }
        }
    }
    for (int c : num)
    {
        cout << c;
    }
    return 0;
}
