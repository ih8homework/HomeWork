#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int sred(vector<int> arr, int x)
{
    return accumulate(arr.begin(), arr.end(), x);
}
int main()
{
    int a;
    vector<int> arr1 = {3, 5, 7, 9};
    cout << "Введите итератор" << endl;
    cin >> a;
    cout << sred(arr1, a);

    return 0;
}