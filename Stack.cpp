#include<stdio.h>
#include<stdlib.h>

/*(Abstrakcyjne typy danych) Stwórz w sposób dynamiczny strukturê stosu. 
Proszê o zabezpieczenie stosu przed przepe³nieniem, przy czym u¿ytkownik na 
pocz¹tku dzia³ania programu powinien mieæ wybór jak du¿y stos mo¿e utworzyæ.
Nastêpnie napisz nastêpuj¹ce funkcje obs³uguj¹ce stos: dodaj element do stosu, 
usuñ element ze stosu, sprawdŸ rozmiar stosu, sprawdŸ czy stos jest pusty. 
Proszê o zapêtlenie programu, tak aby dzia³a³ do momentu, a¿ u¿ytkownik sam nie zdecyduje czy chce zakoñczyæ jego dzia³anie.
*/
void ile();
void wyswietlanie();
void menu();
void dodaj_element();
void usun_element();
void sprawdz_rozmiar();
void czy_pusty();


int* stos;
int r;
int ilosc_elementow;
int zswitch;


int main()
{
	ile();
	for (;;)
	{
		wyswietlanie();
		menu();
	}


	system("PAUSE");
	return 0;
}

void ile()
{
	printf("Podaj jaki duzy chcesz stos: ");
	scanf_s("%d", &r);
	stos = new int[r];
}

void wyswietlanie()
{
	system("CLS");
	printf("Wyglad stosu:\n");
	if (ilosc_elementow == 0)
	{
		printf("Stos jest pusty\n");
	}
	else
	{
		for (int i = ilosc_elementow; i > 0; i--)
		{
			printf("%d\n", stos[i - 1]);
		}
		printf("\n");
	}
}
void menu()
{
	printf("1. Dodaj element\n");
	printf("2. Usun element\n");
	printf("3. Sprawdz rozmiar stosu\n");
	printf("4. Sprawdz czy stos jest pusty\n");
	printf("5. Wyjdz z programu\n");
	printf("Wybierz co chcesz zrobic: ");
	scanf_s("%d", &zswitch);
	switch (zswitch)
	{
	case 1:
		dodaj_element();
		break;
	case 2:
		usun_element();
		break;
	case 3:
		sprawdz_rozmiar();
		break;
	case 4:
		czy_pusty();
		break;
	case 5:
		exit(0);
	default:
		printf("Podaj lcizbe od 1 do 5!\n");
	}
}

void dodaj_element()
{
	if (ilosc_elementow >= r)
	{
		printf("Stos jest pelny\n");
		system("PAUSE");
	}
	else
	{
		printf("Podaj jaka liczbe chcesz dodac do stosu: ");
		scanf_s("%d", &stos[ilosc_elementow]);
		ilosc_elementow += 1;
	}
}

void usun_element()
{
	if (ilosc_elementow >= 1)
	{
		printf("Usuwam liczbe z wierzcholka\n");
		system("PAUSE");
		ilosc_elementow -= 1;
	}
	else
	{
		printf("Stos jest pusty\n");
		system("PAUSE");
	}
}

void sprawdz_rozmiar()
{
	printf("W stosie znajduja sie %d elementy\n", ilosc_elementow);
	system("PAUSE");
}

void czy_pusty()
{
	if (ilosc_elementow == 0)
	{
		printf("Stos jest pusty\n");
		system("PAUSE");
	}
	else
	{
		printf("Stos nie jest pusty\n");
		system("PAUSE");
	}
}