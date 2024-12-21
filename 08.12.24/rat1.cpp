#include <iostream>
using namespace std;

// Объявление структуры типа Rat
struct Rat
{
    string name;
    int speed;
    int location;
    int age;
    int mass;
    string color;

    // Процедура устанавливающя значение свойства speed объекта
    void set_speed(int aValue)
    {
        speed = aValue;
    }

    // Процедура изменяющая свойство location в зависимости от значения свойтва speed объекта
    // Данная процедура при каждом ее вызове увеличивает значение координаты объекта (location) на величину его скорости (speed)
    void set_location()
    {
        location += speed;
    }

    // Процедура выводящая в консоль текущие значения свойств(полей) объекта
    void print()
    {
        cout << "name = " << name << ",\tspeed = " << speed << ",\tlocation = " << location << ",\tage = " << age << ",\tmass = " << mass << ",\tcolor = " << color << endl;
    }
};

// Процедура создающая объект типа Rat с заданием его свойств (после знака "=" указаны значения по умолчанию)
// ПРИМ. Параметры имеющие значения по умолчанию при вызове процедуры можно не указывать
Rat *create_rat(const string nm, int spd = 1, int loc = 0, int ag = 1, int m = 100, const string clr = "white")
{
    Rat *p = new Rat; // Объявляем указаталь p на объект типа Rat
                      // Создаем новый объект типа Rat (выделяем память в куче)
                      // Присваиваем адрес созданного объекта переменной p. Теперь p указывает на созданный объект.

    // Задаем значения свойств созданного  объекта
    p->name = nm;
    p->speed = spd;
    p->location = loc;
    p->age = ag;
    p->mass = m;
    p->color = clr;

    cout << p->name << "\tcreated" << endl;
    p->print(); // Вызываем процедуру print() созданного объекта для вывода в консоль текущих значений его свойств
    return p;   // Возвращаем указатель на созданный объект
}

// Процедура создающая объект типа Rat без задания его свойств
Rat *create_rat()
{
    return new Rat;
}

/* Процедура изменяющая некоторые свойства(поля) объекта типа Rat.
   Параметры процедуры:
    Rat* p -- указатель на объект типа Rat, свойства которого нужно изменить
    const string new_name -- новое значение для свойства name
    int new_speed --  новое значение для свойства speed
*/
void change(Rat *p, const string new_name, int new_speed)
{
    cout << "\n ****** OK, " << p->name << "! It's time to change ******\n";
    p->name = new_name;
    p->speed = new_speed;
    p->print();
}

/*  Прооцедура делающая заданное кол-во шагов (steps_cnt) для объекта типа Rat.
    На каждом шаге изменяет координату объекта и инкрементирует его возраст, после чего выводит текущие значения свойств объекта на консоль
*/
void run(Rat *p, int steps_cnt)
{
    for (int step = 0; step < steps_cnt; step++)
    {
        cout << "\n"
             << p->name << " running\tstep = " << step << endl;
        p->set_location();
        p->age++;
        p->print();
    }
}

int main()
{

    Rat *rat1; // Объявляем переменную rat1 -- указатель на объект типа Rat

    rat1 = create_rat("Vasily", 3); // Создаем объект типа Rat и присваиваем его адрес переменной rat1
                                    // При создании в параметрах определяем что созданая крыса будет зваться "Vasily" и иметь скорость 3.
                                    // Остальные поля получают значения по умолчанию, тк мы их не указали при вызове create_rat().

    run(rat1, 2); // Вызываем процедуру run в которую передаем указатель на объект и кол-во шагов (2)

    change(rat1, "Steven", 5); // Вызываем процедуру change() объекта типа Rat, адрес которого хранится в переменной rat1
                               // Теперь "Vasily" будет зваться "Steven" и двигаться со скоростью 5

    run(rat1, 3); // Делаем 3 шага

    change(rat1, "Fedor", -2); // Опять изменяем объект rat1, теперь он будет зваться "Fedor" и двигаться в противоположную сторону.
    run(rat1, 3);              // Делаем 3 шага

    Rat *rat2 = create_rat(); // Создадим еще один объект типа Rat на этот раз воспользовавшись версией процедуры create_rat() вовсе без параметров.
    cout << "\n\nRat properties undefined\n";
    rat2->print();

    return 0;
}