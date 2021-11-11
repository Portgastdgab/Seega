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

void posicionar_fichas (pieza j1[12], pieza j2[12], pieza bloqueo, mesa tablero) {
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

void mover_fichas (mesa tablero, pieza jugador[12], pieza bloqueo, char ficha){
    int x, y;
    while(true){
        cout<<"J2 seleccione ficha a mover"<<endl;
        cout<<"Posicion x:"<<endl;
        cin>>x;
        cout<<"Posicion y:"<<endl;
        cin>>y;
        if (bloqueo.tablero[y-1][x-1] == ficha and bloqueo.tablero[y-2][x-1] == ' ' or bloqueo.tablero[y-1][x-2] == ' ' or bloqueo.tablero[y-1][x-2] == ' ' or bloqueo.tablero[y][x-1] == ' ' or bloqueo.tablero[y-1][x] == ' '){
            break;
        } else{
            cout<<"Ficha ingresada incorrecta. INTENTELO DE NUEVO!"<<endl;
        }
    }
    for (int j = 0; j < 12; ++j) {
        if (jugador[j].pos_x == x-1 and jugador[j].pos_y == y-1){
            tablero.dibujar_tablero(jugador[j].mover_ficha());
            break;
        }
    }
}