#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double avg(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    return arr[n / 2];
}
int main()
{
    vector<int> nums = {7, 1, 3, 4, 9, 11, 5};
    cout << avg(nums) << endl;
    return 0;
}
