/*
 * operazioni_matrice.h
 *
 *  Created on: 01 dic 2016
 *      Author: Andrea
 */

#ifndef OPERAZIONI_MATRICE_H_
#define OPERAZIONI_MATRICE_H_

void trasposta_matrice(matrice mat, matrice *trasposta);
void prodotto_matrici(matrice mat1, matrice mat2, matrice *prodotto);
void prodotto_scalare(matrice mat, int scalare, matrice *prodotto);
void somma_matrici(matrice mat1, matrice mat2, matrice *matrice_somma);
void matrice_random(matrice *mat);

int i, j, k, valore_prodotto_scalare;

#endif /* OPERAZIONI_MATRICE_H_ */
