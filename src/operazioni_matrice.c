/*
 * operazioni_matrice.c
 *
 *  Created on: 01 dic 2016
 *      Author: Andrea
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "globali.h"
#include "accesso_dati.h"
#include "operazioni_matrice.h"

void trasposta_matrice(matrice mat, matrice *trasposta){

	scrivere_colonna(trasposta, leggere_riga(mat));
	scrivere_riga(trasposta, leggere_colonna(mat));
	i = 0;
	while (i < leggere_riga(mat)) {
		j = 0;
		while (j < leggere_colonna(mat)) {
			scrivere_elemento(trasposta,j,i,leggere_elemento(mat,i,j));
			j++;
		}
		i++;
	}
	return;
}

void prodotto_matrici(matrice mat1, matrice mat2, matrice *prodotto){
	scrivere_riga(prodotto, leggere_riga(mat1));
	scrivere_colonna(prodotto, leggere_colonna(mat2));

	i = 0;
	while (i < leggere_riga(*prodotto)) {
		j = 0;
		while (j < leggere_colonna(*prodotto)) {
			valore_prodotto_scalare = 0;
			k = 0;
			while (k < leggere_colonna(mat1)) {
				valore_prodotto_scalare = valore_prodotto_scalare + (leggere_elemento(mat1,i,k) * leggere_elemento(mat2,k,j));
			k++;
			}
			scrivere_elemento(prodotto,i,j,valore_prodotto_scalare);
		j++;
		}
	i++;
	}
	return;
}

void prodotto_scalare(matrice mat, int scalare, matrice *prodotto){
	scrivere_riga(prodotto,leggere_riga(mat));
	scrivere_colonna(prodotto,leggere_colonna(mat));

	i=0;
	while(i<leggere_riga(*prodotto)){
		j=0;
		while(j<leggere_colonna(*prodotto)){

			scrivere_elemento(prodotto,i,j,leggere_elemento(mat,i,j)*scalare);

		j++;
		}
	i++;
	}

	return;
}

void somma_matrici(matrice mat1, matrice mat2, matrice *matrice_somma){
	scrivere_riga(matrice_somma,leggere_riga(mat1));
	scrivere_colonna(matrice_somma,leggere_colonna(mat1));

	i=0;
	while(i<leggere_riga(*matrice_somma)){
		j=0;
		while(j<leggere_colonna(*matrice_somma)){

			scrivere_elemento(matrice_somma,i,j,leggere_elemento(mat1,i,j)+leggere_elemento(mat2,i,j));

		j++;
		}
	i++;
	}

	return;
}

void matrice_random(matrice *mat){
	srand(time(NULL));
	i=0;
	while(i<leggere_riga(*mat)){
		j=0;
		while(j<leggere_colonna(*mat)){


			scrivere_elemento(mat,i,j,rand()%MAX_RAND_VAL+MIN_RAND_VAL);

		j++;
		}
	i++;
	}

	return;
}


