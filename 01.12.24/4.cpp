#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isDiv(int a) {
    return a % 13 == 0;
}

int findMaxDiv13(const vector<int>& vec) {
    vector<int> v; 
    copy_if(vec.begin(), vec.end(), std::back_inserter(v), isDiv);
    if (v.empty()) {
        return -1;  
    }
    return *max_element(v.begin(), v.end());
}

int main() {
    vector<int> vec = {26, 39, 52, 10, 65, 78, 91, 12};
    cout << findMaxDiv13(vec) << endl;
    return 0;
}
