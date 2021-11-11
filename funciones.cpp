#include "funciones.h"

void seleccionar_color(pieza j1[12], pieza j2[12]){
    char color;
    cout << "ingrese su color(B, R, N)" << endl;
    cin >> color;
    for (int i = 0; i < 12; ++i) {
        j1[i].ficha = color;
    }
    cout << "ingrese su color(B, R, N)" << endl;
    cin >> color;
    for (int i = 0; i < 12; ++i) {
        j2[i].ficha = color;
    }
}