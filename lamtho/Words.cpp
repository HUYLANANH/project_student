#include "Words.h"
void Words::Input_Words(int j)
{
	cout << "so tu trong cau "<<j<<": ";
	cin >> this->num_of_word;
	words = new Word[num_of_word];
	for (int i = 0; i < num_of_word; i++)
	{
		words[i].Input_Word();
	}
}
void Words::Output_Words()
{
	for (int i = 0; i < num_of_word; i++)
	{
		words[i].Output_Word();
	}
}
int Words::get_num_of_word()
{
	return num_of_word;
}
Word Words::get_word(int i)
{
	return words[i-1];
}