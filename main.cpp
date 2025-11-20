#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x;
    cout << "1. Играть" << endl;
    cout << "2. Правила" << endl;
    cout << "3. Выход" << endl;
    cout << "Выберите действие: ";
    cin >> x;

    switch (x) {
        case 1: {
            int z;
            cout << "Выберите категорию:" << endl;
            cout << "1. Животные" << endl;
            cout << "2. Еда" << endl;
            cout << "3. Растения" << endl;
            cout << "Ваш выбор: ";
            cin >> z;

            string word;
            srand(time(0));

            switch (z) {
                case 1: {
                    string words[] = {"cat", "dog", "monkey", "lion", "deer"};
                    word = words[rand() % 5];
                    break;
                }
                case 2: {
                    string words[] = {"cake", "icecream", "pizza", "pasta", "juice"};
                    word = words[rand() % 5];
                    break;
                }
                case 3: {
                    string words[] = {"flower", "grass", "rose", "sunflower", "mint"};
                    word = words[rand() % 5];
                    break;
                }
                default:
                    cout << "Неверный выбор" << endl;
                    return 1;
            }

            string guess(word.size(), '_');
            int tries = 6;
            string input;
            game(tries, guess, word, input);
            break;
        }
        case 2: {
            cout << "Правила:" << endl;
            cout << "- Программа загадывает слово" << endl;
            cout << "- Вы вводите буквы или слово целиком" << endl;
            cout << "- У вас 6 попыток" << endl;
            break;
        }
        case 3: {
            break;
        }
        default:
            cout << "Неверный выбор" << endl;
    }

    return 0;
}