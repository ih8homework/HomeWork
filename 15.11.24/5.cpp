#include <iostream>
using namespace std;

void printRect(int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    printRect(5, 8);
    return 0;
}
