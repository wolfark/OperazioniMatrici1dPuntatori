#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "globali.h"
#include "accesso_dati.h"
#include "operazioni_matrice.h"
#include "io_matrice.h"

int main(void) {
//Creazione matrice randomica
	matrice matrice1;
	allocare_matrice(&matrice1,2,2);
	matrice_random(&matrice1);
	stampare_matrice(matrice1, "Matrice 1");

//Operazione Trasposta di matrice
	matrice trasposta;
	allocare_matrice(&trasposta,2,2);
	trasposta_matrice(matrice1,&trasposta);
	stampare_matrice(trasposta,"Matrice trasposta di Matrice 1");

//Operazione Prodotto di Matrici
	matrice matrice_prodotto;
	allocare_matrice(&matrice_prodotto,2,2);
	prodotto_matrici(matrice1, matrice1, &matrice_prodotto);
	stampare_matrice(matrice_prodotto,"Prodotto di Matrice 1 per Matrice 1");

//Operazione Prodotto di matrice per scalare
	matrice matrice_prodotto_scalare;
	allocare_matrice(&matrice_prodotto_scalare,2,2);
	prodotto_scalare(matrice1, 12, &matrice_prodotto_scalare);
	stampare_matrice(matrice_prodotto_scalare,"Prodotto scalare tra Matrice 1 e lo scalare 12");

	//Operazione Somma di matrici
	matrice matrice_somma;
	allocare_matrice(&matrice_somma,2,2);
	somma_matrici(matrice1, matrice1, &matrice_somma);
	stampare_matrice(matrice_somma,"Somma della Matrice 1 per la Matrice 1");

	system("pause");
	return 0;
}
