#include "piglatin.h"
#include <QString>
#include <QChar>
#include <QStringList>
#include <QDebug>


//Function Decleration
QString moveLetter(QString);
bool ifVowel(QChar);

QString PigLatin::getTranslation() {
    QString translatedText = "";

    QStringList token;
    token = this->textToTransalted.split(" ");

    for(int i=0; i<token.length(); i++) {
        bool boolVowel = ifVowel(token[i][0]);
        if (boolVowel) {
            translatedText += token[i] + "way ";
        } else {
            translatedText += moveLetter(token[i]) + "ay ";
        }
    }
    return translatedText;
}

bool ifVowel(QChar chLetter) {

    QChar letters[] = {'a','e','i','o','u','y'};
    for (int i = 0; i < 6; i++) {
        if (chLetter.toLower() == letters[i])
        {
            return true;
        }
    }
    return false;
}

QString moveLetter(QString strWord) {

    if (!ifVowel(strWord[0])) {
        QChar chLetter = strWord[0].toLower();
        return moveLetter(strWord.right(strWord.length()-1) + chLetter);
    } else {
        return strWord;
    }

}


