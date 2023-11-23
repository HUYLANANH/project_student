#include "Poem.h"
void Poem::Input_Poem(int j)
{
	cout << "so cau trong bai tho so "<<j<<": ";
	cin >> this->num_of_words;
	poem = new Words[num_of_words];
	for (int i = 0; i < num_of_words; i++)
	{
		poem[i].Input_Words(i+1);
	}
}
void Poem::Output_Poem(int j)
{
	cout << "\nbai tho so "<< j << " cua ban la: \n";
	for (int i = 0; i < num_of_words; i++)
	{
		poem[i].Output_Words();
		cout << "\n";
	}
}
int Poem::get_num_of_words()
{
	return num_of_words;
}
bool Poem::check_rule()
{
	return true;
}
