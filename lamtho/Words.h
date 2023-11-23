#pragma once
#include"Word.h"
class Words
{
	Word* words;
	int num_of_word;
public:
	void Input_Words(int);
	void Output_Words();
	int get_num_of_word();
	Word get_word(int);
};

