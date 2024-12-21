#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isChetn(int a) {  
    return a % 2 == 0; 
}

int cnt(const vector<int>& v) {
    return count_if(v.begin(), v.end(), isChetn);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << cnt(v) << endl;
    return 0;
}
