#include <iostream>

using namespace std;

int main() {

    string names[5] = {
        "Lilia",
        "Pedro",
        "Juan",
        "Maria",
        "Carlos"
    };

    int notas_de_parciales[5][3] = {
        {100, 100, 100},
        {100, 98, 95},
        {54, 60, 35},
        {81, 95, 87},
        {87, 95, 91}
    };

    // creo vector de los promedios de las notas de los parciales
    double promedio_parciales[5];

    // calculo y populo el vector en acuerdo a los promedios
    double suma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            suma += notas_de_parciales[i][j];
            if (j == 2) {
                promedio_parciales[i] = round((suma / 3) * 100.0)/100.0;
                suma = 0;
            }
        }
    }

    // crea vector para almacenar la nota de los parciales que se suma al final
    double promedio_parciales_final[5];

    for (int i = 0; i < 5; i++) {
        promedio_parciales_final[i] = round((30 * (promedio_parciales[i] / 100.0)) * 100.0) / 100.0;
        cout << "promedio parciales = " << promedio_parciales_final[i] << endl;
    }

    // creo matriz de notas de laboratorios
    int notas_de_laboratorio[5][4] = {
        {100, 100, 100, 100},
        {91, 95, 91, 82},
        {89, 95, 100, 100},
        {85, 81, 81, 75},
        {95, 91, 98, 95}
    };

    // creo vector de promedio de notas de laboratorios
    double promedio_laboratorios[5];

    // populo el vector
    suma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            suma += notas_de_laboratorio[i][j];
            if (j == 3) {
                promedio_laboratorios[i] = round((suma / 4) * 100.0)/100.0;
                suma = 0;
            }
        }
    }

    double promedio_laboratorios_final[5];
    for (int i = 0; i < 5; i++) {
        promedio_laboratorios_final[i] = round((25 * (promedio_laboratorios[i] / 100.0)) * 100.0) / 100.0;
        cout << "promedio laboratorio = " << promedio_laboratorios_final[i] << endl;
    }

    int notas_tareas[5][3] = {
        {100, 100, 100},
        {91, 95, 91},
        {87,95, 100},
        {85, 81, 81},
        {95, 91, 98}
    };

    int promedio_tareas[5];

    suma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            suma += notas_tareas[i][j];
            if (j == 2) {
                promedio_tareas[i] = round((suma / 3) * 100.0)/100.0;
                suma = 0;
            }
        }
    }

    int promedio_tareas_final[5];

    for (int i = 0; i < 5; i++) {
        promedio_tareas_final[i] = round((20 * (promedio_tareas[i] / 100.0)) * 100.0) / 100.0;
        cout << "promedio parciales = " << promedio_tareas_final[i] << endl;
    }

    double notas_investigacion[5] = {100.0, 95.0, 98.0, 81.0, 75.0};
    double notas_investigacion_final[5];

    for (int i = 0; i < 5; i++) {
        notas_investigacion_final[i] = round((20 * (notas_investigacion[i] / 100.0)) * 100.0) / 100.0;
        cout << "promedio parciales = " << notas_investigacion_final[i] << endl;
    }

    double notas_asistencia[5] = {100, 95, 85, 95, 91};
    double notas_asistencia_final[5];

    for (int i = 0; i < 5; i++) {
        notas_asistencia_final[i] = round((5 * (notas_asistencia[i] / 100.0)) * 100.0) / 100.0;
        cout << "promedio parciales = " << notas_asistencia_final[i] << endl;
    }

    double nota_final[5];
    for (int i = 0; i < 5; i++) {
        nota_final[i] = promedio_parciales_final[i] + promedio_laboratorios_final[i] + promedio_tareas_final[i] + notas_investigacion_final[i] + notas_asistencia_final[i];
        cout << names[i] << " saco: " << nota_final[i] << endl;
    }

    return 0;
}