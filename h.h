

#ifndef HANGMAN_H_H
#define HANGMAN_H_H
void drawHangman(int triesLeft);
void game(int tries, std::string guess,std::string word, std::string input);
void draw(int tries);
#endif //HANGMAN_H_H