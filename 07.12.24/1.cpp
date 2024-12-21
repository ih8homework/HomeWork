
#include <iostream>
using namespace std;

struct Phone
{
    string brand;
    int model;
    int memory;
    float diagonale;
    string color;
};

void set_color(Phone &p, string c)
{
    p.color = c;
};

Phone *create_phone()
{
    return new Phone;
}

void print(Phone &p)
{
    cout << p.brand << " " << p.memory << " " << p.model << " " << p.diagonale << " " << p.color << endl;
}

int main()
{
    Phone a;
    a.brand = "iPhone";
    a.model = 10;
    a.memory = 256;
    a.diagonale = 5.8;
    a.color = "red";
    print(a);
    set_color(a, "black");
    print(a);

    Phone *b = create_phone();
    b->brand = "iPhone";
    b->model = 12;
    b->memory = 64;
    b->diagonale = 6.1;
    print(*b);

    return 0;
}