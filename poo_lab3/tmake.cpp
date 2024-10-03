#include "tmake.h"

int tmake::numberOfWords(string text)
{
	int count = 0;
	for (int i = 0; i < text.size(); i++)
		if (text[i] == ' ') count++;
	return ++count;
}

int tmake::numberOfSentences(string text)
{
	int count = 0;
	for (int i = 0; i < text.size(); i++)
		if (text[i] == '.') count++;
	return count;
}

bool tmake::isVowel(char ch)
{
	ch = tolower(ch);
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

vector<string> tmake::split(string str, char delimiter)
{
	// Using str in a string stream
	stringstream ss(str);
	vector<string> res;
	string token;
	while (getline(ss, token, delimiter)) {
		res.push_back(token);
	}
	return res;
}

vector <topwords> tmake::totop(vector<string> recivedtop)
{
	vector <topwords> result;
	topwords temptop;
	for (int i = 0; i < recivedtop.size(); i++) {
		temptop.word = recivedtop[i];
		temptop.number = 1;
		for (int j = i+1; j < recivedtop.size();) {
			if (recivedtop[i] == recivedtop[j]) {
				recivedtop.erase(recivedtop.begin() + j);
				temptop.number++;
			}
			else ++j;
		}
		result.push_back(temptop);
	}
	return result;
}

bool tmake::compareInterval(topwords i1, topwords i2)
{
	return (i1.number > i2.number);
}

