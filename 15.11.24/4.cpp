#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string szhat(const string& s) {
    if (s.empty()) {
        return "";
    }

    ostringstream res;
    int cnt = 1;

    for (int i = 1; i < s.size(); i++) { 
        if (s[i] == s[i-1]) {
            cnt++;
        } else { 
            res << s[i-1];
            if (cnt > 1) { 
                res << cnt;
            }
            cnt = 1; 
        }
    }
    res << s.back();
    if (cnt > 1) {
        res << cnt;
    }
    return res.str();
}

int main() {
    string ish_str = "daabbbccccc";
    string res_str = szhat(ish_str);
    cout << "Исходная строка: " << ish_str << endl;
    cout << "Сжатая строка: " << res_str << endl;

    return 0;
}
