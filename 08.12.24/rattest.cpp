#include <iostream>
using namespace std;

struct Rat
{
    string name;
    int speed;
    int location;
    int age;
    int mass;
    string color;

    void set_speed(int aValue)
    {
        speed = aValue;
    }

    void set_location()
    {
        location += speed;
    }

    void print()
    {
        cout << "name = " << name << ",\tspeed = " << speed << ",\tlocation = " << location << ",\tage = " << age << ",\tmass = " << mass << ",\tcolor = " << color << endl;
    }
};

Rat *create_rat()
{
    return new Rat;
}

void change(Rat &r, const string new_name, int new_speed)
{
    r.name = new_name;
    r.speed = new_speed;
}

int main()
{

    Rat rat1;
    rat1.name = "Lariska";
    rat1.speed = 2;
    rat1.location = 0;
    rat1.age = 1;
    rat1.mass = 75;
    rat1.color = "white";

    rat1.print();
    rat1.set_location();
    rat1.print();

    change(rat1, "Steven", 5);
    rat1.print();
    rat1.set_location();
    rat1.print();

    Rat *rat2 = create_rat();
    rat2->location = 6;
    rat2->age = 100;
    rat2->mass = 150;
    rat2->color = "black";

    change(*rat2, "Julbars", 8);
    rat2->print();

    rat2->set_location();
    rat2->print();

    return 0;
}