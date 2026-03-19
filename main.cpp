#include <iostream>
#include <vector>
#include <string>

using namespace std;

string getUniquePrefix(int index, const vector<string>& words) {
    string word = words[index];

    for (size_t len = 1; len <= word.length(); len++) {
        string prefix = word.substr(0, len);
        bool unique = true;

        for (size_t j = 0; j < words.size(); j++) {
            if (index != j && words[j].find(prefix) == 0) {
                unique = false;
                break;
            }
        }
        if (unique) return prefix;
    }
    return word;
}

int main() {
    int n;
    cout << "Сколько слов? ";
    cin >> n;

    vector<string> words(n);
    cout << "Вводи слова:";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    cout << "Результат:"<<endl;
    for (int i = 0; i < n; i++) {
        string prefix = getUniquePrefix(i, words);
        cout << words[i] << " -> " << prefix.length() << " букв(ы) [" << prefix << "]\n";
    }

    return 0;
}
