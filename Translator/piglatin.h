#ifndef PIGLATIN_H
#define PIGLATIN_H

#include<QString>

class PigLatin
{
public:
    PigLatin();
    PigLatin(QString textToTransalted_){ textToTransalted = textToTransalted_;};
    QString getTranslation();

private:
    QString textToTransalted;
};

#endif // PIGLATIN_H
