#include "h.h"
#include <ctime>
#include <windows.h>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void game(int tries, string guess, string word, string input) {
    while (tries > 0 && guess != word) {
        cout << "Слово: ";
        for (char c : guess) cout << c << ' ';
        cout << "\nОсталось попыток: " << tries << "\n";
        cout << "Введите букву или слово: ";
        cin >> input;

        if (input.size() == 1) {
            char letter = tolower(input[0]);
            bool found = false;
            for (int i = 0; i < word.size(); ++i) {
                if (tolower(word[i]) == letter) {
                    guess[i] = word[i];
                    found = true;
                }
            }
            if (found)
                cout << "Хорошая работа!\n";
            else {
                cout << "Этой буквы нет.\n";
                tries--;
            }
        } else {
            if (input == word) {
                guess = word;
                break;
            } else {
                cout << "Неправильное слово!\n";
                tries--;
            }
        }
    }
    if (guess == word) {
        cout << "\nТы выиграл! Слово было: " << word << "\n";
    }
    else{
        cout << "\nТы проиграл. Слово было: " << word << "\n";
    }
}