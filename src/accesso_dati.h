/*
 * accesso_dati.h
 *
 *  Created on: 01 dic 2016
 *      Author: Andrea
 */

#ifndef ACCESSO_DATI_H_
#define ACCESSO_DATI_H_

void allocare_matrice(matrice *mat,int righe,int colonne);
int leggere_riga(matrice mat);
int leggere_colonna(matrice mat);
int leggere_elemento(matrice mat,int riga, int colonna);
void scrivere_riga(matrice *mat,int valore);
void scrivere_colonna(matrice *mat,int valore);
void scrivere_elemento(matrice *mat,int riga, int colonna,int valore);

#endif /* ACCESSO_DATI_H_ */
