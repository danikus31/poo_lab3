#include "connection.cpp";
#include "tmake.h"

int main()
{
	string lorem = "salut danikus cum la tine danikus";

    //erase "," from string
    for (int i = 0; i < lorem.size();) {
        if (lorem[i] == ',') {
            lorem.erase(i, 1);
        }
        else {
            i++;
        }
    }


	tmake myfunction;
	cout << "numarul de cuvinte = " << myfunction.numberOfWords(lorem)<< endl;
	cout << "numarul de propozitii = " << myfunction.numberOfSentences(lorem)<< endl;



    //geting letter, vowel, consonants
    int letterCount = 0, vowelCount = 0, consonantCount = 0;
    for (char ch : lorem) {
        if (isalpha(ch)) {
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


    //getting longest word
    vector<string> res = myfunction.split(lorem, ' ');
    string longesttext = "";
    for (int i = 0; i < res.size(); i++) {
        if (res[i].size() > longesttext.size()) {
            longesttext = res[i];
        }
    }
    cout << "cel mai lung cunvand este " << longesttext << endl;


    //make tabel of most used words
    vector <topwords> mytop = myfunction.totop(res);



    //sort table of most used words
    for (int i = 1; i != 0;) {
        i = 0;
        for (int j = 0; j < mytop.size()-1; j++) {
            if (mytop[j].number < mytop[j + 1].number) {
                topwords temptop;
                temptop = mytop[j];
                mytop[j] = mytop[j + 1];
                mytop[j+ 1] = temptop;
                i = 1;
                cout << "lol";
            }
        }
    }
    //show top 
    for (int i = 0; i < mytop.size(); i++) {
        cout << mytop[i].word << " = " << mytop[i].number << endl;
    }
}
