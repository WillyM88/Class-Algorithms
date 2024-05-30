#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int solicitarFilas() {
    int filas;
    cout << "Cuantas filas tiene la matriz?" << endl;
    cin >> filas;
    return filas;
}

int solicitarColumnas() {
    int columnas;
    cout << "Cuantas columnas tiene la matriz?" << endl;
    cin >> columnas;
    return columnas;
}

int main() {
    cout << "Primero deberas pasar las dimensiones de la matriz 1\n";
    int filasMatriz1 = solicitarFilas();
    int columnasMatriz1 = solicitarColumnas();

    // Crear una matriz con filas y columnas de acuerdo a lo especificado
    int matriz1[filasMatriz1][columnasMatriz1];

    cout << "Ahora, introduce en orden los valores de la matriz:\n";
    for (int i = 0; i < filasMatriz1; i++) {
        for (int j = 0; j < columnasMatriz1; j++) {
            cout << "fila: " << i+1 << ", columna: " << j+1 << "?" << endl;
            cin >> matriz1[i][j];
        }
    }

    // Imprimir matriz para asegurar que esta correcto.
    cout << "Entonces la matriz es la que sigue: \n";
    for (int i = 0; i < filasMatriz1; i++) {
        for (int j = 0; j < columnasMatriz1; j++) {
            cout << "(A" << i+1 << "," << j+1 << ")= " << matriz1[i][j] << " ";
            if (matriz1[i][j] >= 0) {
                cout << " ";
            }
            if (j == (columnasMatriz1 - 1)) {
                cout << endl;
            }
        }
    }
}