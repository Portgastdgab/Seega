#include "funciones.h"


int main() {
    mesa tablero;

    pieza bloqueo;
    pieza j1[12];
    pieza j2[12];
    //hacer un tablero global en el arreglo
    char **p = new char*[5];
    for (int i = 0; i < 5; ++i) {
        p[i] = new char[5];
    }
    for (int i = 0; i < 12; ++i) {
        j1[i].tablero = p;
    }
    for (int i = 0; i < 12; ++i) {
        j2[i].tablero = p;
    }
    bloqueo.tablero = p;

    seleccionar_color(j1, j2);

    //Seleccionar posiciones de las fichas
    int cont1 = 0;
    int cont2 = 0;
    bloqueo.tablero[2][2] = 'X';
    j1[0].tablero[2][0] = j1[0].ficha;
    j1[1].tablero[4][2] = j1[1].ficha;
    j2[0].tablero[0][2] = j2[0].ficha;
    j2[1].tablero[2][4] = j2[1].ficha;
    tablero.dibujar_tablero(j1[0].tablero);
    for (int i = 2; i < 12; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < 2; ++j) {
                cout<<"J1 ";
                tablero.dibujar_tablero(j1[cont1].insertar_ficha());
                cont1++;
            }
        } else {
            for (int j = 0; j < 2; ++j) {
                cout<<"J2 ";
                tablero.dibujar_tablero(j2[cont2].insertar_ficha());
                cont2++;
            }
        }
    }
}