#include "Word.h"
void Word::Input_Word()
{
	cin >> this->word;
}
void Word::Output_Word()
{
	cout << word<<" ";
}
bool Word::Check_Rhyme(Word word_2)
{
	if (word == word_2.word)
		return true;
	else if (word == "ta" && word_2.word == "la")
		return true;
	else if (word == "nhau" && word_2.word == "dau")
		return true;
	else if (word == "loc" && word_2.word == "moc")
		return true;
	else if (word == "buon" && word_2.word == "khon")
		return true;
	else if (word == "non" && word_2.word == "buon")
		return true;
	else if (word == "ta" && word_2.word == "hoa")
		return true;
	else if (word == "hoa" && word_2.word == "nha")
		return true;
	else if (word == "nha" && word_2.word == "gia")
		return true;
	else if (word == "gia" && word_2.word == "ta")
		return true;
	else
		return false;
}
