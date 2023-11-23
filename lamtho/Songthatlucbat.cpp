#include "Songthatlucbat.h"
bool Songthatlucbat::check_rule()
{
	if (num_of_words % 4 != 0)
		return false;
	for (int i = 0; i < num_of_words; i++)
	{
		if (i % 4 == 0 || i % 4 == 1)
		{
			if (poem[i].get_num_of_word() != 7)
				return false;
		}
		else if (i % 4 == 2)
		{
			if (poem[i].get_num_of_word() != 6)
				return false;
		}
		else if (i % 4 == 3)
		{
			if (poem[i].get_num_of_word() != 8)
				return false;
		}
	}
	for (int j = 0; j < num_of_words; j++)
	{
		if (j % 4 == 0)
		{
			if (poem[j].get_word(7).Check_Rhyme(poem[j+1].get_word(5)) == 0)
				return false;
		}
		else if (j % 4 == 1)
		{
			if (poem[j].get_word(7).Check_Rhyme(poem[j + 1].get_word(6)) == 0)
				return false;
		}
		else if (j % 4 == 2)
		{
			if (poem[j].get_word(6).Check_Rhyme(poem[j + 1].get_word(6)) == 0)
				return false;
		}
	}
	return true;
}
