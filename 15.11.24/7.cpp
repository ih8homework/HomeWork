#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

float calc(int N, const vector<int>& grades) {
    int cnt = 0;
    int sum = 0;

    for (int g : grades) {
        if (g > 2) {
            cnt++;
        }
        sum += g;
    }

    if (cnt < N/2) {
        return 2;  
    }

    return static_cast<float>(sum)/N;  
}

int main() {
    int N;
    cout << "Введите количество заданий: ";
    cin >> N;

    vector<int> grades(N);

    cout << "Введите оценки за задания (от 2 до 5): " << endl;
    for (int i = 0; i < N; ++i) {
        cin >> grades[i];
    }
    cout << "Финальная оценка: "<< calc(N, grades) << endl;
    
    return 0;
}
