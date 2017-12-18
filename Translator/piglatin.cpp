#include <iostream>
#include <string>
#include<QString>
#include<QDebug>
using namespace std;

QString PigLatin::getTranslation() {

    QString translatedText = "";

    //Declare three functions
    void pigLatin(Qchar []);
    Qstring moveLetter(Qstring);


    //Split up string into tokens
    //Each word is broken up at space
    Qchar *token;
    token = strtok(this->textToBeTranslated, " ");

    Qstring PigLatinOutput;

    //Loop through each word for translation
    //Null pointer is returned at end of string
    while (token != NULL) {
        pigLatin(token);
        token = strtok(NULL," ");
    }
    cout << endl;

    return 0;


    // Check if first letter is vowel
    // Implement lowercase function to see if they're equal with vowels in array
bool PigLatin::ifVowel(Qchar chLetter) {
        Qchar letters[] = {'a','e','i','o','u','y'};
        for (int i = 0; i < 6; i++) {
            if (tolower(chLetter) == letters[i])
            {
                return true;
            }
        }

        return false;

    }

    // Recursive function to take off a non vowel letter and put it on the end of word
    // substr allows for specific characters in a string to be asscessed - remove the first letter
    // Recall the function until a vowel is encountered and then return the word.
    // If word starts with a vowel, return word

    Qstring moveLetter(Qstring strWord) {

        if (!ifVowel(strWord[0])) {
            Qchar chLetter = tolower(strWord[0]);
            return moveLetter(strWord.substr(1) + chLetter);
        }

        else { return strWord; }

    }

    //Determine if string starts with vowel
    //If vowel, end with "way"
    //If not vowel, end with "ay"
    void pigLatin(Qchar strWord[]) {

        if (ifVowel(strWord[0])) {
            cout << strWord << "way ";
        }

        else {
            cout << moveLetter(strWord) << "ay ";
        }
    }

    for(int i = 0; i<(this->textToBeTranslated.length()); i++) {
        translatedText += PigLatin[this->textToBeTranslated[i].toUpper()] + " ";
    }

    return translatedText;
}
