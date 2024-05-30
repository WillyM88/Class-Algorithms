#include <iostream>

using namespace std;

int main() {

    int salario = 2000;

    cout << "El salario inicial es de: " << salario << endl;
    for (int i = 0; i < 3; i++) {
        salario += (salario * 0.1);
        cout << "En el anio " << i + 2 << " el salario " << salario << endl;
    }
    
    return 0;
}