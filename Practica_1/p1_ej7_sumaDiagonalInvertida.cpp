#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int matriz[4][4] = {
        {10, 20, 30, 20},
        {10, 10, 10, 10},
        {20, 10, 15, 12},
        {10, 15, 20, 25}
    };

    int sumaDiag = 0;

    // ahora la suma diagonal invertida:
    int j = 0;
    for (int i = 3; i >= 0; i--) {
        cout << "(i = " << i << "), (j = " << i << ") = " << matriz[i][i] << endl;
        sumaDiag += matriz[i][j];
        j++;
    }    

    cout << "total de la suma invertida es: " << sumaDiag << endl;

    return 0;
}
