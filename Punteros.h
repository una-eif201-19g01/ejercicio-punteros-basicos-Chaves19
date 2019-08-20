/*
 * =====================================================================================
 *
 *       Filename:  Punteros.h
 *
 *    Description:  Clase principal para Punteros
 *
 *        Created:  2019-08-18
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef PUNTEROSBASICO_PUNTEROS_H
#define PUNTEROSBASICO_PUNTEROS_H


class Punteros {
    static int numeroAlCuboValor(int);
    static int numeroAlCuboPuntero(int *);
    static int numeroAlCuboReferencia(int &);
    static int raizDeUnNumeroValor(int);
    static int raizDeUnNumeroPuntero(int *);
    static int raizDeUnNumeroReferencia(int &);

public:
    Punteros();

    static void imprimirDatosPuntero();
    static void imprimirCalculoAlCuboValor();
    static void imprimirCalculoAlCuboPuntero();
    static void imprimirCalculoAlCuboReferencia();
    static void imprimirCalculoRaizDeUnNumeroValor();
    static void imprimirCalculoRaizDeUnNumeroPuntero();
    static void imprimirCalculoRaizDeUnNumeroReferencia();
};


#endif //PUNTEROSBASICO_PUNTEROS_H
