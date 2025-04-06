#include <iostream>
using namespace std;

int main() {
    for (int lado1 = 1; lado1 <= 500; lado1++) {
        for (int lado2 = lado1; lado2 <= 500; lado2++) {
            for (int hipotenusa = lado2; hipotenusa <= 500; hipotenusa++) {
                if (lado1 * lado1 + lado2 * lado2 == hipotenusa * hipotenusa) {
                    cout << "Triple de Pitágoras: " << lado1 << ", " << lado2 << ", " << hipotenusa << endl;
                }
            }
        }
    }

    return 0;
}
