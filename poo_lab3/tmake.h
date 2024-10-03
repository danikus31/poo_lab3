#pragma once
#include "connection.cpp"

class tmake
{	
public:


	int numberOfWords(string text);
	int numberOfSentences(string text);
	bool isVowel(char ch);
	vector<string> split(string str, char delimiter);
	vector <topwords> totop(vector<string> recivedtop);
	bool compareInterval(topwords i1, topwords i2);
};

