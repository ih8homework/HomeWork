#include <iostream>
using namespace std;

int summa(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  
        n /= 10;        
    }
    return sum;
}

void findNums(int n) {
    for (int i = 1000; i <= 9999; ++i) {
        if (summa(i) == n) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    findNums(15);
    return 0;
}
