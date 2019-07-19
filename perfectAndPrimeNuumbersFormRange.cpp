#include <cstdlib>
#include <iostream>
#include<stdio.h>

using namespace std;
int liczba;

int czy_pierwsza(int liczba)
{
 	int i=2;
 	while(liczba>i)
   {
    if (liczba%i==0)
       {
       // printf("To liczba druga %d.\n",liczba);
      //  system("PAUSE");
        return EXIT_SUCCESS;
       }
       else
       {
        i++;
       }
   }
   if(liczba==1)
   		return(liczba);
   printf(" %d, ",liczba);
   return(liczba);
}

int czy_doskonale(int liczba)
{
	int i=1;
	int suma=0;

	while(liczba>i)
   	{
   		if (liczba%i==0)
   		{
   			suma+=i;
   			i++;
		}
		else
		i++;
	}
	if (liczba==suma)
		{
			printf(" %d, ",suma);
		}
	return(0);
}
void pierwsze(int min,int max)
{
 	int i;
 	printf("Liczby pierwsze - ");
	 for(i=min;i<=max;i++)
 	{
 		czy_pierwsza(min);
	 	min++;
	 }
	 printf("\n\nWcisnij dowolny klawisz, aby wrocic do menu..");
}

void doskonala(int min,int max)
{
 	int i;
 	printf("Liczby doskonale - ");
	 for(i=min;i<=max;i++)
 	{
 		czy_doskonale(min);
		//printf("jestem w doskonala %d: \n",min);
	 min++;
	 }
	 printf("\n\nWcisnij dowolny klawisz, aby wrocic do menu..");
}

int zakres(int &min,int &max)
{

 	printf("Podaj lewy brzeg zakresu - ");
 	scanf("%d",&min);
 	printf("Podaj prawy brzeg zakresu - ");
 	scanf("%d",&max);
	return(min,max);
}

int main(int argc, char *argv[])
{
	int wybor=0;
	int min,max;
	while(true)
	{
		system("cls");
		printf("Wyszukiwanie liczb w zadanym przedziale\n");
		printf("\t1 - liczby pierwsze \n");
		printf("\t2 - liczby doskonale \n");
		printf("\t3 - koniec programu \n");
		printf("Wybierz rodzaj liczb: ");
		scanf("%d",&wybor);
		switch(wybor)
		{
			case 1:
				{
					zakres(min,max);
					pierwsze(min, max);
				}
				break;
			case 2:
				{
					zakres(min,max);
					doskonala(min,max);
				}
				break;
			case 3:
				exit(0);
		}
		getchar();getchar();
	}
system("PAUSE");
return EXIT_SUCCESS;
}
