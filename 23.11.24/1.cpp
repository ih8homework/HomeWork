#include <iostream>
#include <vector>
using namespace std;
int exist(vector<int> arr, int num)
{
    for (int o : arr)
        if (o == num)
            return 1;
    return 0;
}
int main()
{
    int a, b, y = 0, correct1 = 0, correct2 = 0;
    vector<int> quest;
    vector<int> answer;
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        quest.push_back(a);
    }
    for (int n = 6; n > 0; n--)
    {
        cout << "Осталось " << n << " попыток" << endl;
        for (int i = 0; i < 4; i++)
        {
            cin >> b;
            correct2 += exist(quest, b);
            answer.push_back(b);
        }
        y = 0;
        for (int x : quest)
        {
            if (x == answer[y])
                correct1++;
            y++;
        }
        cout << "Количество элементов на своих местах " << correct1 << endl;
        cout << "Количество присутствующих элементов, но не на своих местах " << correct2 - correct1 << endl;
        if (correct1 == 4)
            break;
        correct1 = 0;
        correct2 = 0;
        answer.clear();
    }
    if (correct1 == 4)
        cout << "win" << endl;
    else
        cout << "defeat" << endl;
    return 0;
}