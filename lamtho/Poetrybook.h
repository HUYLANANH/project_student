#pragma once
#include"Poem.h"
#include"LucBat.h"
#include"DuongluatThatngonbatcu.h"
#include"Songthatlucbat.h"
class Poetrybook
{
	Poem** poetrybook;
	int num_of_poem;
public:
	void Input_Poetrybook();
	void Output_Poetrybook();
	void check_poem();
	void find_max();
};

