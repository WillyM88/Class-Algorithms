#include <iostream> 
using namespace std;

int main() {

    string names[5] = {
        "Maria",
        "Pedro",
        "Juan",
        "Carlos",
        "Marta"
    };

    int horasDeTrabajo[5][4] = {
        {40, 40, 42, 40},
        {40, 40, 40, 40},
        {42, 42, 40, 40},
        {40, 40, 40, 40},
        {40, 40, 40, 40}
    };

    int totalHoras[5];

    int suma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            suma += horasDeTrabajo[i][j];
        }
        totalHoras[i] = suma;
        suma = 0;
    }

    for (int i = 0; i < 5; i++) {
        cout << "el total de horas de: " << names[i] << i << " es de: " << totalHoras[i] << " ";
        totalHoras[i] > 160 ? cout << "trabajo horas extras." << endl : cout << endl;
    }

    return 0;
}