#ifndef MORSECODE_H
#define MORSECODE_H

#include<QString>


class MorseCode
{
public:
    MorseCode();
    MorseCode(QString textToBeTranslated_) { textToBeTranslated = textToBeTranslated_;};
    QString getTranslation();
private:
    QString textToBeTranslated;
};

#endif // MORSECODE_H
