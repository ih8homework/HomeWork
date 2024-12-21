#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> arr, int x)
{
    int result = 0;
    for (int i : arr)
    {
        if (i > x)
        {
            result++;
        }
    }
    return result;
}
int main()
{
    int a;
    vector<int> arr1 = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    cout << "Введите элемент" << endl;
    cin >> a;
    cout << sum(arr1, a);

    return 0;
}