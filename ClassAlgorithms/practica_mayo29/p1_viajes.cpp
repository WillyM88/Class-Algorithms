#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    cout << "Cuantas personas viajan?" << endl;
    int viajadores;
    cin >> viajadores;

    int matrizViajes[viajadores][2];

    // popular la matriz:
    int respuesta;
    int cancun = 0;
    int centroAmerica = 0;
    int espana = 0;
    int total = 0;

    cout << "A continuacion digita el numero del destino de cada persona" << endl;
    for (int i = 0; i < viajadores; i++) {
        cout << "Hacia donde viaja la persona: \n";
        cout << "(1) - Cancun.\n(2) - Centro America.\n(3) - Espana." << endl;
        cin >> respuesta;
        matrizViajes[i][0] = respuesta;
        switch (respuesta)
        {
        case 1:
            matrizViajes[i][1] = 2000;
            cancun++;
            total += 2000;
            break;
        case 2:
            matrizViajes[i][1] = 1000;
            centroAmerica++;
            total += 1000;
            break;
        case 3: 
            matrizViajes[i][1] = 3000;
            espana++;
            total += 3000;
            break;
        default:
            break;
        }
    }

    // imprimir respuesta:
    string destino;
    for (int i = 0; i < viajadores; i++) {
        switch (matrizViajes[i][0])
        {
        case 1:
            destino = "Cancun";
            break;
        case 2:
            destino = "Centro America";
            break;
        case 3:
            destino = "Espana";
            break;
        default:
            break;
        }
        cout << "El viajador # " << i << " viaja con destino a: " << destino 
        << " por un costo de: $" << matrizViajes[i][1] << ".00 Dolares." << endl;
    }

    cout << cancun << " personas viajan a Cancun, el total es: $" << cancun * 2000 << ".00" << endl;
    cout << centroAmerica << " personas viajan a Cancun, el total es: $" << centroAmerica * 1000 << ".00" << endl;
    cout << espana << " personas viajan a Cancun, el total es: $" << espana * 3000 << ".00" << endl;

    cout << "En total viajan " << viajadores << " personas, el total es de: $" << total << ".00" << endl;
    return 0;
}