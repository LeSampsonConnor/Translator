#include "morsecode.h"
#include <string>
#include <map>
#include<QString>
#include<QDebug>

QString MorseCode::getTranslation() {
    QString translatedText = "";

    std::map<QChar, QString> MorseCode;
        MorseCode['A'] = ".-";MorseCode['B'] = "-...";MorseCode['C'] = "-.-.";
        MorseCode['D'] = "-..";MorseCode['E'] = ".";MorseCode['F'] = "..-.";MorseCode['G'] = "--.";
        MorseCode['H'] = "....";MorseCode['I'] = "..";MorseCode['J'] = ".---";MorseCode['K'] = "-.-";
        MorseCode['L'] =  ".-..";MorseCode['M'] = "--";MorseCode['N'] = "-.";MorseCode['O'] =  "---";
        MorseCode['P'] = ".--.";MorseCode['Q'] = "--.-";MorseCode['R'] = ".-." ;MorseCode['S'] = "...";
        MorseCode['T'] = "-";MorseCode['U'] = "..-";MorseCode['V'] = "...-";MorseCode['W'] = ".--";
        MorseCode['X'] = "-..-";MorseCode['Y'] =  "-.--";MorseCode['Z'] = "--..";MorseCode[' '] = "|";

    for(int i = 0; i<(this->textToBeTranslated.length()); i++) {
            translatedText += MorseCode[this->textToBeTranslated[i].toUpper()] + " ";
        }

    return translatedText;
}
