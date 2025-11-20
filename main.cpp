#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include "h.h"
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int x;
    cout<<"Добрый день!"<<endl;
    cout<<"Я игра 'Виселица' на английском"<<endl;
    cout<<"-------------"<<endl;
    cout<<"|   Играть   |"<<endl;
    cout<<"-------------"<<endl;
    cout<<"------------------"<<endl;
    cout<<"|  Правила игры   |"<<endl;
    cout<<"------------------"<<endl;
    cout<<"------------"<<endl;
    cout<<"|   Выход   |"<<endl;
    cout<<"------------"<<endl;
    cout<<"Выберете нужное действие:";
    cin>>x;
    switch (x) {
        case(1): {
            int z;
            cout<<"Выберете категорию"<<endl;
            cout<<"1)Животные"<<endl;
            cout<<"2)Еда"<<endl;
            cout<<"3)Растения"<<endl;
            cin>>z;
            switch (z) {
                cout << "=== Виселица ===\n";
                cout << "Вы можете ввести одну букву или целое слово.!\n\n";
                case(1): {
                    string words[] = {"cat", "dog", "monkey", "lion", "deer"};
                    srand(time(0));
                    string word = words[rand() % 5];
                    string guess(word.size(), '_');
                    int tries = 6;
                    string input;
                    game(tries,guess,word,input);
                    break;
                }
                case(2): {
                    string words[] = {"cake", "icecream", "pizza", "pasta", "juice"};
                    srand(time(0));
                    string word = words[rand() % 5];
                    string guess(word.size(), '_');
                    int tries = 6;
                    string input;
                    game(tries,guess,word,input);
                    break;
                }
                case(3): {
                    string words[] = {"flower", "grass", "rose", "sunflower", "mint"};
                    srand(time(0));
                    string word = words[rand() % 5];
                    string guess(word.size(), '_');
                    int tries = 6;
                    string input;
                    game(tries,guess,word,input);
                    break;
                }

            }
            break;
        }
            case(2): {
            cout<<"Программа загадывает слово из выбранной категории."<<endl;
            cout<<"Пользователь вводит букву или слово целиком."<<endl;
            cout<<"Если слово отгадано, то игра завершается."<<endl;
            break;
        }
            case(3): {
            break;
        }
    }
}
