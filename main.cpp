#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string text;
    cout << "Введите текст: ";
    getline(cin, text);

    stringstream ss(text);
    string word;
    int lineLen = 0;


    while (ss >> word) {

        if (lineLen + word.length() > 50) {
            cout << endl;
            lineLen = 0;
        }


        cout << word << " ";


        lineLen += word.length() + 1;
    }

    return 0;
}
