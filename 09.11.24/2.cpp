#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a=0;
    vector<int>num = {1,6,4,9,2,3,4};
    for(int i=0; i< num.size()-1;i++){
        if (num[i] > a){
            a = num[i];
        }
    }
    cout<<a;
    return 0;
}