#include <vector>
#include <iostream>

using namespace std;

int main()
{

    int a, maxlen, n1, n2;
    vector<int> num1;
    vector<int> num2;
    vector<int> result;
    cout << "\nВведите количество элементов 1 вектора\n";
    cin >> n1;
    cout << "\nВведите элементы\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> a;
        num1.push_back(a);
    }
    cout << "\nВведите количество элементов 2 вектора\n";
    cin >> n2;
    cout << "\nВведите элементы\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> a;
        num2.push_back(a);
    }
    if (n1 > n2)
    {
        num2.resize(n1);
        maxlen = n1;
    }
    else
    {
        num1.resize(n2);
        maxlen = n2;
    }
    for (int i = 0; i < maxlen; i++)
    {
        result.push_back(num1[i] + num2[i]);
    }
    cout << "\nРезультат\n";
    for (int a : result)
    {
        cout << a << " ";
    }
    return 0;
}
