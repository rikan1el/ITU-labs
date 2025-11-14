#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    string result = "";

    cout << "Введите текст (точка - конец): " << endl;
    getline(cin, text, '.');

    for (size_t i = 0; i < text.length(); i++) {
        char c = text[i];

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            continue;
        }

        // Дублируем '*'
        if (c == '*') {
            result += "**";
        } else {
            result += c;
        }
    }

    cout << "Результат: " << result << endl;

    return 0;
}
