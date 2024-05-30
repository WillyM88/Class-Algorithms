#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int matriz[3][4] = {
        {10, 20, 30, 10},
        {10, 10, 10, 10},
        {20, 10, 15, 12}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "_";
            if (j == 3) {
                cout << "= " << matriz[i][0] + matriz[i][1] + matriz[i][2] + matriz[i][3];
                cout << endl;
            }
        }
    }
    return 0;
}