#pragma once
#define Z 2
#include <ctime>

using namespace std;

class polegry
{
public:
	int x, y, difficulty;
	int i, j, k;
	int ***tab;
								//tutaj u¿ytkownik podaje za pomoca interfejsu rozmiar pola
	polegry(int i, int j, int diff)
	{
		x = i;
		y = j;
		difficulty = diff;
		tab = new int **[x];
		for (i = 0; i < x; i++)
		{
			tab[i] = new int *[y];
			for (j = 0; j < y; j++)
				tab[i][j] = new int[Z];
		}							//zaalokowano pole gry
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < y; j++)
			{
				for (k = 0; k < Z; k++)
					tab[i][j][k] = 0;		//wyzerowano pole gry
			}
		}
	}

	void placeMines(/*int ***tab, int difficulty, int x, int y*/)			//difficulty - okreœla iloœæ min
	{
		srand(time(NULL));
		int i = 0, w, k;
		while (i<difficulty)
		{
			w = 1 + rand() % (x - 2);
			k = 1 + rand() % (y - 2);

			if (tab[w][k][1] == 0)
			{
				tab[w][k][1] = 10;										//10 oznacza bombe
				i++;
			}
		}
	}
	~polegry()
	{
	}

	void countMines(/*int ***tab, int x, int y*/)
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

	void testminefield(/*int ***tab, int x, int y*/)
	{
		int w, k;
		for (w = 0; w < x; w++)
		{
			for (k = 0; k < y; k++)
			{
				cout << tab[k][w][1] << '	';
			}
			cout << endl;
		}
		cout << endl;
		/*for (w = 1; w < x - 1; w++)
		{
		for (k = 1; k < y - 1; k++)
		{
		cout << tab[w][k][0];
		}
		cout << endl;
		}*/
	}

	void dolasapera(int i, int j)
	{
		if (i < x && j < y && i>0 && j>0)
		{
			if ((i - 1) < x && (j - 1) < y && (i - 1) > 0 && (j - 1) > 0)
			{
				if ((tab[i - 1][j - 1][1] == 0) && (tab[i - 1][j - 1][0] == 0))
				{
					tab[i - 1][j - 1][0] = 1;

					if (((i - 1) > 0) || ((i - 1) < (x - 1)) || ((j - 1) > 0) || ((j - 1) < (y - 1)))
						dolasapera((i - 1), (j - 1));
				}
			}
			if (i < x && (j - 1) < y && i > 0 && (j - 1)>0)
			{
				if ((tab[i][j - 1][1] == 0) && (tab[i][j - 1][0] == 0))
				{
					tab[i][j - 1][0] = 1;
					if ((i > 0) || (i < (x - 1)) || ((j - 1) > 0) || ((j - 1) < (y - 1)))
						dolasapera(i, (j - 1));
				}
			}
			if ((i + 1) < x && (j - 1) < y && (i + 1) > 0 && (j - 1) > 0)
			{
				if ((tab[i + 1][j - 1][1] == 0) && (tab[i + 1][j - 1][0] == 0))
				{
					tab[i + 1][j - 1][0] = 1;
					if (((i + 1) > 0) || ((i + 1) < (x - 1)) || ((j - 1) > 0) || ((j - 1) < (y - 1)))
						dolasapera((i + 1), (j - 1));
				}
			}
			if ((i + 1) < x && j < y && (i + 1)>0 && j > 0)
			{
				if ((tab[i + 1][j][1] == 0) && (tab[i + 1][j][0] == 0))
				{
					tab[i + 1][j][0] = 1;
					if (((i + 1) > 0) || ((i + 1) < (x - 1)) || ((j) > 0) || ((j) < (y - 1)))
						dolasapera((i + 1), j);
				}
			}
			if ((i + 1) < x && (j + 1) < y && (i + 1) > 0 && (j + 1) > 0)
			{
				if ((tab[i + 1][j + 1][1] == 0) && (tab[i + 1][j + 1][0] == 0))
				{
					tab[i + 1][j + 1][0] = 1;
					if (((i + 1) > 0) || ((i + 1) < (x - 1)) || ((j + 1) > 0) || ((j + 1) < (y - 1)))
						dolasapera((i + 1), (j + 1));
				}
			}
			if (i < x && (j + 1) < y && i > 0 && (j + 1)>0)
			{
				if ((tab[i][j + 1][1] == 0) && (tab[i][j + 1][0] == 0))
				{
					tab[i][j + 1][0] = 1;
					if (((i) > 0) || ((i) < (x - 1)) || ((j + 1) > 0) || ((j + 1) < (y - 1)))
						dolasapera((i), (j + 1));
				}
			}
			if ((i - 1) < x && (j + 1) < y && (i - 1) > 0 && (j + 1) > 0)
			{
				if ((tab[i - 1][j + 1][1] == 0) && (tab[i - 1][j + 1][0] == 0))
				{
					tab[i - 1][j + 1][0] = 1;
					if (((i - 1) > 0) || ((i - 1) < (x - 1)) || ((j + 1) > 0) || ((j + 1) < (y - 1)))
						dolasapera((i - 1), (j + 1));
				}
			}
			if ((i - 1) < x && j < y && (i - 1)>0 && j > 0)
			{
				if ((tab[i - 1][j][1] == 0) && (tab[i - 1][j][0] == 0))
				{
					tab[i - 1][j][0] = 1;
					if (((i - 1) > 0) || ((i - 1) < (x - 1)) || ((j) > 0) || ((j) < (y - 1)))
						dolasapera((i - 1), (j));
				}
			}
		}
	}

};

//if (((x - 1) > 0) && ((x - 1) < x) && ((y - 1) > 0) && ((y - 1) < y))
