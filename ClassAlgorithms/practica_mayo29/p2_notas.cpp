#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    char notas[5];
    int nota;
    for (int i = 0; i < 5; i++) {
        cout << "Escribe la nota del estudiante #: " << i + 1 << endl;
        cin >> nota;
        if (nota >= 91) {
            notas[i] = 'A'; 
        } else if (nota <= 90 && nota >= 81) {
            notas[i] = 'B';
        } else if (nota <= 80 && nota >= 71) {
            notas[i] = 'C';
        } else if (nota <= 70 && nota >= 61) {
            notas[i] = 'D';
        } else {
            notas[i] = 'F';
        }
    };

    for (int i = 0; i < 5; i++) {
        cout << "El estudiante: " << i << " tiene una: " << notas[i] << endl;
    }


    return 0;
}