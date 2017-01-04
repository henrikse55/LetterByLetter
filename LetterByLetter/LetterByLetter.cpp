// LetterByLetter.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
void LetterByLetter(string FirstWord, string SecondWord, size_t shift);

int main()
{
    LetterByLetter("floor", "brake",0);
    LetterByLetter("wood", "book",0);
    LetterByLetter("a fall to the floor", "braking the door in",0);

    cin.ignore();

    return 0;
}


void LetterByLetter(string FirstWord, string SecondWord, size_t shift) 
{  
    string word = FirstWord;

    if (shift > FirstWord.length()) {
        cout << endl;
        return;
    }

    shift == 0 ? cout << FirstWord << endl : cout;

    if (FirstWord[shift] != SecondWord[shift]) {
        word[shift] = SecondWord[shift];
        cout << word << endl;
    }
    return LetterByLetter(word, SecondWord ,shift+1);
}