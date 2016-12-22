/*
 * io_matrice.c
 *
 *  Created on: 01 dic 2016
 *      Author: Andrea
 */

#include <stdio.h>
#include <stdlib.h>
#include "globali.h"
#include "accesso_dati.h"
#include "io_matrice.h"


void stampare_matrice(matrice mat, char messaggio[50]){
	printf("\n%s (%d righe - %d colonne)\n", messaggio, leggere_riga(mat),leggere_colonna(mat));
	i = 0;
	while (i < leggere_riga(mat)) {
		j = 0;
		while (j < leggere_colonna(mat)) {
			printf("%d\t", leggere_elemento(mat,i,j));
			j++;
		}
		printf("\n");
		i++;
	}
	return;
}

