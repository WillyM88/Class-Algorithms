#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    cout << "Cuantos estudiantes hay?\n";
    int numDeEstudiantes;
    cin >> numDeEstudiantes;

    int edades[numDeEstudiantes];
    string nombres[numDeEstudiantes];

    for (int i = 0; i < numDeEstudiantes; i++) {
        cout << "Introducir la informacion en el siguiente orden:\n";
        cout << "nombre:     edad:\n";
        cin >> nombres[i];
        cin >> edades[i];
    }

    cout << "La lista de estudiantes es la que sigue:\n";
    cout << "Edad:  Nombre:\n";

    for (int i = 0; i < numDeEstudiantes; i++) {
        cout << edades[i] << "       " << nombres[i] << "\n";
    }

    return 0;
}