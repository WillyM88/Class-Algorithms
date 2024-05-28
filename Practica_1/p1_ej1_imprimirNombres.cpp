#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    cout << "Cuantos estudiantes hay?\n";
    int numDeEstudiantes;
    cin >> numDeEstudiantes;

    string nombres[numDeEstudiantes]; 
    string nombre;

    // Tomar los nombre de los estudiantes:
    for (int i = 0; i < numDeEstudiantes; i++) {
        cout << "Cual es el nombre del estudiante numero " << i + 1 << endl;
        cin >> nombre;
        nombres[i] = nombre;
    }

    // Imprimir la lista de estudiantes uno tras otro:
    cout << "\n";
    cout << "entonces los estudiantes son: \n";
    for (int i = 0; i < numDeEstudiantes; i++) {
        cout << i + 1 << "." << nombres[i] << "\n";
    }

    return 0;
}