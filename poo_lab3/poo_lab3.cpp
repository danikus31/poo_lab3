#include "connection.cpp";
#include "tmake.h"

int main()
{
	string lorem = "lol kek 4eburek. padla ti bleati.";
	tmake myfunction;
	cout << "numarul de cuvinte = " << myfunction.numberOfWords(lorem)<< endl;
	cout << "numarul de propozitii = " << myfunction.numberOfSentences(lorem)<< endl;


    int letterCount = 0, vowelCount = 0, consonantCount = 0;

    for (char ch : lorem) {
        if (std::isalpha(ch)) {
            letterCount++;  // It's a letter
            if (myfunction.isVowel(ch)) {
                vowelCount++;  // It's a vowel
            }
            else {
                consonantCount++;  // It's a consonant
            }
        }
    }
    std::cout << "Total letters: " << letterCount << std::endl;
    std::cout << "Vowels: " << vowelCount << std::endl;
    std::cout << "Consonants: " << consonantCount << std::endl;
}
