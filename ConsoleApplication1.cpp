// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main( int argc, char**argt)
{
	
	
	
	

	
	
	int a;
	a = 1;
	while (a == 1)
	{

		int m;
		m = 1;
		printf("tapez 1 pour mode 1persone\n tapez 2 pour mode 2persone\n");
		scanf("%d", &m);
		if (m==1)
		{



	int f;
	int hz;
	srand(time(NULL));
	printf("tapez 1 pour niveau de dificulter facile\n tapez 2 pour niveau de dificulter moyen\n tapez 3 pour niveau de dificulter difficile\n");
		scanf("%d", &f);
		if (f == 1)
		{
			hz = rand() % (100 - 1) + 1;
		}
		else if (f == 2)
		{
			hz = rand() % (1000 - 1) + 1;
		}
		else if (f == 3)
		{
			hz = rand() % (10000 - 1) + 1;
		}
		else
		{
			printf("je n'ai pas comprise votre reponse\n");
		}
		
		int  N = -1, I, a;
		a = 1;
		I = 0;
	
	
		
	while (N != hz)
	{
		printf("choisiser un nombre\n");
		scanf("%d", &N);
		if (N < hz)
		{
			printf("non le nombre que vous chercher est plus grand\n");
		}
		else if(N > hz)
		{
			printf("non le nombre que vous chercher est plus petit\n");
		}
		I++;
	}
	printf("feliciation cest bien le nombre imaginair, mais vous aver reussi en %d coups\n", I);
	printf("voudrais vous jouer une autre partie: toucher 1 pour continuer et 0 pour exit\n");
	scanf("%d", &a);
	if (a == 0)
	{
		printf("merci a la prochaine\n");
		break;
	 }
	
		}



		else
		{
			int f;
			int hz;
			
			printf("tapez 1 pour niveau de dificulter facile\n tapez 2 pour niveau de dificulter moyen\n tapez 3 pour niveau de dificulter difficile\n");
			scanf("%d", &f);
			if (f == 1)
			{
				printf("choisser un nombre entre 1 et 100\n");
			}
			else if (f == 2)
			{
				printf("choisser un nombre entre 1 et 1000\n");
			}
			else if (f == 3)
			{
				printf("choisser un nombre entre 1 et 10000\n");
			}
			else
			{
				printf("je n'ai pas comprise votre reponse\n");
			}

			printf("jouer 1 ecriver un nombre a chercher par jour 2\n");
			scanf("%d", &hz);

			int  N = -1, I, a;
			a = 1;
			I = 0;



			while (N != hz)
			{
				printf(" jour 2 choisiser un nombre\n");
				scanf("%d", &N);
				if (N < hz)
				{
					printf("non le nombre que vous chercher est plus grand\n");
				}
				else if (N > hz)
				{
					printf("non le nombre que vous chercher est plus petit\n");
				}
				I++;
			}
			printf("feliciation cest bien le nombre imaginair, mais vous aver reussi en %d coups\n", I);
			printf("voudrais vous jouer une autre partie: toucher 1 pour continuer et 0 pour exit\n");
			scanf("%d", &a);
			if (a == 0)
			{
				printf("merci a la prochaine\n");
				break;
			}
		}



	}
    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
