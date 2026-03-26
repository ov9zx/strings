#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <windows.h>


using namespace std;
int commonPrefixLength(string s1, string s2) {
    int len = 0;
    while (len < s1.length() && len < s2.length()) {
        if (s1[len] == s2[len]) {
            len++;
        } else {
            break;
        }
    }

    return len;
}
int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string line;
    getline(cin,line);
    stringstream ss(line);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }

    int maxPrefix = 0;


    for (size_t i = 0; i < words.size(); i++) {
        for (size_t j = i + 1; j < words.size(); j++) {
            int currentPrefix = commonPrefixLength(words[i], words[j]);
            if (currentPrefix > maxPrefix) {
                maxPrefix = currentPrefix;
            }
        }
    }
    cout << "Результат: " << maxPrefix << endl;

    return 0;
}
