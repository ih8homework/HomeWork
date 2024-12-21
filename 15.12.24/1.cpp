#include <iostream>
#include <vector>
using namespace std;
struct Cat
{
    string name;
    int age;
    int weight;
    string color;
};
ostream &operator<<(ostream &b, Cat &ct)
{
    b << "name = " << ct.name << "; age = " << ct.age << "; weight = " << ct.weight << "; color = " << ct.color << endl;
    return b;
};

ostream &operator<<(ostream &g, vector<Cat> ct)
{
    for (auto &a : ct)
    {
        g << a;
    }
    return g;
};

istream &operator>>(istream &b, Cat &ct)
{
    cout << "name: ";
    b >> ct.name;
    cout << "age: ";
    b >> ct.age;
    cout << "weight: ";
    b >> ct.weight;
    cout << "color: ";
    b >> ct.color;
    return b;
};

int main()
{
    Cat a, c;
    vector<Cat> b = {
        {"Vasiliy", 3, 7, "red"},
        {"Barsik", 1, 5, "black"},
        {"Murka", 2, 3, "black"}};
    a.name = "kot";
    a.age = 5;
    a.weight = 4;
    a.color = "white";

    cout << a;
    cout << b;
    cout << "Введите данные кошки" << endl;
    cin >> c;
    cout << c;
    return 0;
}
