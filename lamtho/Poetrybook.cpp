#include "Poetrybook.h"
void Poetrybook::Input_Poetrybook()
{
	cout << "so bai tho ban muon viet la: ";
	cin >> this->num_of_poem;
	poetrybook = new Poem* [num_of_poem];
	int chon;
	for (int i = 0; i < num_of_poem; i++)
	{
		cout << "chon 1 de lam tho Luc Bat\n";
		cout << "chon 2 de lam tho Song that luc bat\n";
		cout << "chon 3 de lam tho Duong luat That ngon bat cu\n";
		cin >> chon;
		switch (chon)
		{
			case 1:
			{
				poetrybook[i] = new LucBat;
				poetrybook[i]->Input_Poem(i+1);
				break;
			}
			case 2:
			{
				poetrybook[i] = new Songthatlucbat;
				poetrybook[i]->Input_Poem(i + 1);
				break;
			}
			case 3:
			{
				poetrybook[i] = new DuongluatThatngonbatcu;
				poetrybook[i]->Input_Poem(i + 1);
				break;
			}
		}
	}
}
void Poetrybook::Output_Poetrybook()
{
	for (int i = 0; i < num_of_poem; i++)
	{
		poetrybook[i]->Output_Poem(i+1);
		cout << "\n";
	}
}
void Poetrybook::check_poem()
{
	for (int i = 0; i < num_of_poem; i++)
	{
		if (poetrybook[i]->check_rule() == 0)
		{
			cout << "bai tho thu " << i + 1 << " sai"<<"\n";
		}
		else if(poetrybook[i]->check_rule() ==1 )
			cout << "bai tho thu " << i + 1 << " dung" << "\n";
	}
}
void Poetrybook::find_max()
{
	cout << "bai tho dai nhat la:\n";
	int max = 0;
	for (int i = 0; i < num_of_poem; i++)
	{
		if (poetrybook[i]->get_num_of_words() > max)
			max = poetrybook[i]->get_num_of_words();
	}
	for (int j = 0; j < num_of_poem; j++)
	{
		if (poetrybook[j]->get_num_of_words() == max)
		{
			cout << "bai " << j + 1 << " : " << max << " cau\n";
		}
	}
}