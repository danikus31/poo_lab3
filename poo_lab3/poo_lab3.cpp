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
    cout << "Total letters: " << letterCount << std::endl;
    cout << "Vowels: " << vowelCount << std::endl;
    cout << "Consonants: " << consonantCount << std::endl;



    vector<string> res = myfunction.split(lorem, ' ');
    string longesttext = "";
    for (int i = 0; i < res.size(); i++) {
        if (res[i].size() > longesttext.size()) {
            longesttext = res[i];
        }
    }
    cout << "cel mai lung cunvand este " << longesttext;

}
