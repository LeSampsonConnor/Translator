//  PigLatinCode.hpp
//  PigLatin.cpp
//
//  Created by Aashna Shah on 12/18/17.
//  Copyright © 2017 Aashna Shah. All rights reserved.
//

#ifndef PigLatin_h
#define PigLatin_h

#include<stdio.h>
#include<QString>

class PigLatin
{
public:
    PigLatin();
    PigLatin(QString textToBeTranslated_) { textToBeTranslated = textToBeTranslated_;};
    Qstring getTranslation();
private:
    QString textToBeTranslated;
};

#endif /* PigLatinCode_hpp */
