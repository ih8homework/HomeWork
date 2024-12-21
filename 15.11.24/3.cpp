#include <iostream>
#include <map>
#include <cctype>

using namespace std;
int main()
{
    string txt;
    char c;
    map<char, string> MORZE;
    MORZE['a'] = ".-";
    MORZE['b'] = "-...";
    MORZE['c'] = "-.-.";
    MORZE['d'] = "-..";
    MORZE['e'] = ".";
    MORZE['f'] = "..-.";
    MORZE['g'] = "--.";
    MORZE['h'] = "....";
    MORZE['i'] = "..";
    MORZE['j'] = ".---";
    MORZE['k'] = "-.-";
    MORZE['l'] = ".-..";
    MORZE['m'] = "--";
    MORZE['n'] = "-.";
    MORZE['o'] = "---";
    MORZE['p'] = ".--.";
    MORZE['q'] = "--.-";
    MORZE['r'] = ".-.";
    MORZE['s'] = "...";
    MORZE['t'] = "-";
    MORZE['u'] = "..-";
    MORZE['v'] = "...-";
    MORZE['w'] = ".--";
    MORZE['x'] = "-..-";
    MORZE['y'] = "-.--";
    MORZE['z'] = "--..";
    cin >> txt;
    for (int i = 0; i < size(txt); i++)
    {
        cout << MORZE[tolower(txt[i])] << " ";
    }
    return 0;
}