#include "DuongluatThatngonbatcu.h"
bool DuongluatThatngonbatcu::check_rule()
{
	if (num_of_words != 8)
		return false;
	for (int i = 0; i < num_of_words; i++)
	{
		if (poem[i].get_num_of_word() != 7)
			return false;
	}
	if (poem[0].get_word(7).Check_Rhyme(poem[1].get_word(7)) == 0)
		return false;
	if (poem[1].get_word(7).Check_Rhyme(poem[3].get_word(7)) == 0)
		return false;
	if (poem[3].get_word(7).Check_Rhyme(poem[5].get_word(7)) == 0)
		return false;
	if (poem[5].get_word(7).Check_Rhyme(poem[7].get_word(7)) == 0)
		return false;
	else
		return true;
}