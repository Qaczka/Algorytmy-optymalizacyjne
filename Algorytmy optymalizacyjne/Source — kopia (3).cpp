#include <iostream>
#include <cstdlib>
#include <string>

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
	int czy_byl[4] = { false,false,false,false };
	int W = 10, j = 0, m, z2, nowe = 1, nowe_n = 1,max,maxc;
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

	cout << endl;
	
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
			//------------------------------------------------------//
				for (i = 0; i <= W; i++)
				{
					c = i;
					z1 = 1;//ile razy powtarzac

					for (z = 0; z < 4; z++)
					{
						czy_byl[z] = false;
					}

					while (z1 <= j+1)
					{
						max = 0;
						maxc = 0;

						for (m = 0; m < j; m++)
						{
							if ((t[m][0] > max) && (czy_byl[m] == false))
							{
								max = t[m][0];
								maxc = t[m][1];
							}
						}


						for (m = 0; m < j; m++)
						{
							if(t[m][0]==max)
							czy_byl[m] = true;
						}
						
							//cout << "Max to: " << max << endl;
						
					//------------------------------------------------------//
					if (c >= maxc)
					{
						V[j][i] =V[j][i]+ max;
						c = c - maxc;
					}
					z1++;


					//------------------------------------------------------//
				}
			}
		}
	}

 

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