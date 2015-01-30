#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

char* Wczytaj_slownik(char* wskaznik)
{
	FILE* plik;
	int i;
	unsigned int wiersze = 0;
	char znak;
	char **tablica;

	if((plik = fopen("Dic.dic", "r")) == NULL)
	{
		printf("\nError: Blad otwierania slowanika.\n");
		return NULL;
	}

	// Zliczenie wierszy w slowniku, dla alokacji pamieci
	while((znak = getc(plik)) != EOF)
	{
		if(znak == '\n')
			wiersze++;
	}


	tablica = (char*) malloc(wiersze * sizeof(char*));

	for(i = 0; i < wiersze; i++)
	{
		tablica[i] = malloc(64 * sizeof(char));
	}

	// Przewinięcie tablicy na początek
	rewind(plik);	

	for(i = 0; i < wiersze; i++)
	{
		if(fgets(tablica[i], 63, plik) == NULL)
		{
			printf("\nError: Blad przy wpisywaniu do tablicy!\n");
			return NULL;
		}
	}

	
}