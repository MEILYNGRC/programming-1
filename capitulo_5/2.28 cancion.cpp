#include <iostream>
#include <string>
using namespace std;

int main() {
    string regalos[] = {
        "una perdiz en un �rbol de peras",
        "dos t�rtolas",
        "tres gallinas francesas",
        "cuatro p�jaros llamadores",
        "cinco anillos de oro",
        "seis patos nadadores",
        "siete cisnes nadando",
        "ocho vacas lecheras",
        "nueve doncellas bailando",
        "diez se�ores saltando",
        "once trompetistas tocando",
        "doce tamborileros tocando"
    };

    string dia[] = {
        "primer", "segundo", "tercer", "cuarto", "quinto", "sexto", "s�ptimo",
        "octavo", "noveno", "d�cimo", "und�cimo", "duod�cimo"
    };

    // Imprimir la canci�n
    for (int i = 0; i < 12; ++i) {
        // Imprimir el d�a
        switch (i) {
            case 0: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 1: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 2: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 3: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 4: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 5: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 6: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 7: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 8: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 9: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 10: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
            case 11: cout << "En el " << dia[i] << " d�a de Navidad, mi amor me dio:" << endl; break;
        }

        // Imprimir los regalos
        for (int j = i; j >= 0; --j) {
            cout << "  - " << regalos[j] << endl;
        }

        cout << endl;
    }

    return 0;
}
