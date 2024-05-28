#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    // declaro la matriz
    int matriz[4][4] = {
        {10, 20, 30, 10},
        {10, 10, 10, 10},
        {20, 10, 15, 12},
        {0, 0, 0, 0}
    };
    
    int suma = 0;
    // sumo cada columna y lo almaceno en la ultima fila
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            cout << "i=" << i << " j=" << j << " = " << matriz[i][j] << endl;
            suma += matriz[i][j];
            if (i == 2) {
                cout << "total de columna = " << suma << endl;
                matriz[3][j] = suma;
                suma = 0;
            }
        }
    }; 

    // imprimo la matriz nueva
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "_";
            if (j == 3) {
                cout << endl;
            }
        }
    };

    return 0;
}