#pragma once
#include"Words.h"
class Poem
{
protected:
	Words* poem;
	int num_of_words;
public:
	void Input_Poem(int);
	void Output_Poem(int);
	int get_num_of_words();
	virtual bool check_rule();
};

