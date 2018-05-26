#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

	int C[] = { 5,4,10,11,7 }, z=0, c=5, i=0, l=5,z1=0,dzienz=z,dzienc=0;




	for (i = 0; i < l; i++)
	{
		if (i == 0)
		{
			z = 0;
			c = C[i];

			dzienz = 0;
			dzienc = 0;
		}
		else
		{
			z1 = C[i] - c;

			if (z1 > z)
			{
				z = z1;
				dzienz = i;
			}

			if(c>C[i])
			{
				c = C[i];
				dzienc = i;
			}
		}
	}

	dzienz++;
	dzienc++;

	cout << "Najwiekszy zysk to: " << z << " ,a najnizsza cena to " << c << endl;

	cout << "W takim razie najlepiej jest kupic w dniu " << dzienc << ", a sprzedac w dniu " << dzienz << "." << endl;


	int t[][2] = {{10,5},{5,2},{20,6},{50,3}};//0 czas a 1 too rozmiar
	int W = 10, j = 0, m, z2;
	int V[5][11];//bo 4 pliki i W = 10
	int n[5];

	for (j = 0; j < 5; j++)
	{
		for (i = 0; i <= 10; i++)
		{
			V[j][i] = 0;
		}
	}

	z = 0, z1 = 0, c = 0;
	
	for (j = 0; j < 5; j++)
	{
		if (j == 0)
		{
			for (i = 0; i <= W; i++)
			{
				V[j][i] = 0;
			}
		}
		else
		{
			for (i = 0; i <= W; i++)
			{
				for (m = 1; m <= j; m++)
				{
					z1 = -t[m-1][1] + i;//czy waga sie zmiesci
					if ((m - 2) >= 0)
					{
						z2 = -t[m - 2][1] + i;
					}

					if (V[j][i] < t[m - 1][0])
					{

						if (z1 >= 0)
						{
							if (((m-2)>=0)&&(z1+z2>=c))
							{
								V[j][i] = t[m - 1][0]+t[m-2][0];
								c = t[m - 1][1]+ t[m - 2][1];
							}
							else
							{
								V[j][i] = t[m - 1][0];
								c = t[m - 1][1];//waga
							}
						}

					}
				}
				c = 0;
			}
		}
	}

	/*

	for (i = 0; i <= W; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (j == 0)
			{
				V[i][j] = 0;
			}
			else
			{
				z1 = C[i] - c;

				if (z1 > z)
				{
					z = z1;
				}

				if (c > C[i])
				{
					c = C[i];
				}
			}
		}
	}

	*/

	for (j = 0; j < 5; j++)
	{
		for (i = 0; i <= 10; i++)
		{
			cout << V[j][i] << " ";
		}
		cout << endl;
	}


	system("PAUSE");
	return 0;
}