#include <iostream>
#include <string>

using namespace std;

//Declare three functions
void pigLatin(char []);
string moveLetter(string);
bool ifVowel(char);

int main(int argc, const char * argv[]) {
    
    //Ask user to enter string
    char strPhrase[100];
    cout << "Enter a string to translate: ";
    cin.getline(strPhrase,100);
    
    //Split up string into tokens
    //Each word is broken up at space
    char *token;
    token = strtok(strPhrase, " ");
    
    string PigLatinOutput;
    
    //Loop through each word for translation
    //Null pointer is returned at end of string
    while (token != NULL) {
        pigLatin(token);
        token = strtok(NULL," ");
    }
    
    cout << endl;
    
    return 0;
    
}

// Check if first letter is vowel
// Implement lowercase function to see if they're equal with vowels in array
bool ifVowel(char chLetter) {
    
    char letters[] = {'a','e','i','o','u','y'};
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

string moveLetter(string strWord) {
    
    if (!ifVowel(strWord[0])) {
        char chLetter = tolower(strWord[0]);
        return moveLetter(strWord.substr(1) + chLetter);
    }
    
    else { return strWord; }
    
}

//Determine if string starts with vowel
//If vowel, end with "way"
//If not vowel, end with "ay"
void pigLatin(char strWord[]) {
    
    if (ifVowel(strWord[0])) {
        cout << strWord << "way ";
    }
    
    else {
        cout << moveLetter(strWord) << "ay ";
    }
}


