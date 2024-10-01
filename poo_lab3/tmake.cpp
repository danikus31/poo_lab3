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
