#include "LucBat.h"
bool LucBat::check_rule()
{
	if (num_of_words % 2 == 1)
		return false;
	for (int i = 0; i < num_of_words; i++)
	{
		if (i % 2 == 0 && poem[i].get_num_of_word() != 6)
		{
			return false;
		}
		if (poem[i].get_num_of_word() != 8 && i % 2 == 1)
			return false;
	}
	for (int j = 0; j < num_of_words-1; j++)
	{
		if (j % 2 == 0 && poem[j].get_word(6).Check_Rhyme(poem[j + 1].get_word(6)) == 0)
		{
			return false;
		}
		if (j % 2 == 1 && poem[j].get_word(8).Check_Rhyme(poem[j + 1].get_word(6)) == 0)
		{
			return false;
		}
	}
	return true;
}