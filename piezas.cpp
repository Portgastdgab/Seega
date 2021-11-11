#include "piezas.h"

pieza::pieza() {
    for (int i = 0; i < 5; ++i) {
        tablero[i] = new char[5];
    }
}

bool pieza::verificar_insercion(int pos_x, int pos_y) {
    if (pos_x<0 or pos_x>4 or pos_y<0 or pos_y>4 or tablero[pos_y][pos_x] == 'B' or tablero[pos_y][pos_x] == 'R' or tablero[pos_y][pos_x] == 'N' or tablero[pos_y][pos_x] == 'X'){
        cout<<"INSERCION INVALIDA!"<<endl;
        return false;
    }
    else{
        return true;
    }
}

char **pieza::insertar_ficha(){
    int x = 0, y = 0;

    while(true){
        cout << "ingrese posicion x:" << endl;
        cin >> x;
        pos_x = x - 1;
        cout << "ingrese posicion y:" << endl;
        cin >> y;
        pos_y = y - 1;
        if (verificar_insercion(pos_x, pos_y)){
            break;
        }
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (pos_x == i and pos_y == j) {
                tablero[j][i] = ficha;
            }
            else if (pos_x == i and pos_y == j) {
                tablero[j][i] = ficha;
            }
        }
    }
    return tablero;
}
