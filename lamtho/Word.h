#pragma once
#include<iostream>
#include <string>
using namespace std;
class Word
{
	string word;
public:
	void Input_Word();
	void Output_Word();
	bool Check_Rhyme(Word word_2);
};

