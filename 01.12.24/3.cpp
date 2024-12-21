#include <iostream>
#include <vector>
using namespace std;
int avg(vector<int> arr)
{
    int sum = 0;
    for (int i : arr)
    {
        sum += i;
    }
    return (sum / arr.size());
}
int main()
{
    int a;
    vector<int> arr1 = {10, 20, 30, 40};
    cout << avg(arr1);

    return 0;
}