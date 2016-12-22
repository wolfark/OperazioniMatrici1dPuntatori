/*
 * accesso_dati.c

 *
 *  Created on: 01 dic 2016
 *      Author: Andrea
 */
#include <stdlib.h>

#include "globali.h"


void allocare_matrice(matrice *mat,int righe,int colonne){
	mat->colonna=colonne;
	mat->riga=righe;

	mat->m=(int*) calloc(righe*colonne,sizeof(int));
	return;
}

int leggere_riga(matrice mat){
	return mat.riga;
}

int leggere_colonna(matrice mat){
	return mat.colonna;
}

int leggere_elemento(matrice mat,int riga, int colonna){
	return *(mat.m+(riga*leggere_colonna(mat)+colonna));
}

void scrivere_riga(matrice *mat,int valore){
	mat->riga=valore;
	return;
}

void scrivere_colonna(matrice *mat,int valore){
	mat->colonna=valore;
	return;
}

void scrivere_elemento(matrice *mat,int riga, int colonna,int valore){
	*(mat->m+(riga*leggere_colonna(*mat)+colonna))=valore;
	return;
}
