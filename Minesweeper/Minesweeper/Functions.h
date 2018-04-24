#pragma once
#include <iostream>
#include <Windows.h>
//#include "MainForm.cpp"
#include <ctime>
#include <cstdlib>
#include <cstdio>
#define Z 2

using namespace std;


void placeMines(int ***tab, int difficulty, int x, int y)			//difficulty - okreœla iloœæ min
{
	srand(time(NULL));
	int i=0, w, k;
	while(i<difficulty)
	{
	w = 1 + rand() % (x-2);
	k = 1 + rand() % (y-2);

		if (tab[w][k][1] == 0)
		{
			tab[w][k][1] = 10;										//10 oznacza bombe
			i++;
		}
	}
}

void countMines(int ***tab, int x, int y)
{
	int w, k, count = 0;
	for (w = 1; w < x - 1; w++)
		for (k = 1; k < y - 1; k++)
		{
			if (tab[w][k][1] == 0)
			{
				count = 0;
				if (tab[w - 1][k - 1][1] == 10)
					count++;
				if (tab[w][k - 1][1] == 10)
					count++;
				if (tab[w + 1][k - 1][1] == 10)
					count++;
				if (tab[w + 1][k][1] == 10)
					count++;
				if (tab[w + 1][k + 1][1] == 10)
					count++;
				if (tab[w][k + 1][1] == 10)
					count++;
				if (tab[w - 1][k + 1][1] == 10)
					count++;
				if (tab[w - 1][k][1] == 10)
					count++;
				tab[w][k][1] = count;
			}
			
		}
}

void testminefield(int ***tab, int x, int y)
{
	int w, k;
	for (w = 0; w < x; w++)
	{
		for (k = 0; k < y; k++)
		{
			cout << tab[w][k][1]<<'	';
		}
		cout << endl;
	}
	/*for (w = 1; w < x - 1; w++)
	{
		for (k = 1; k < y - 1; k++)
		{
			cout << tab[w][k][0];
		}
		cout << endl;
	}*/
}