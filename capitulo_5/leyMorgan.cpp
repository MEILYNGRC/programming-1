#include <iostream>
using namespace std;

int main() {
    int x = 4, y = 6, a = 3, b = 3, g = 5, i = 5, j = 6;

    // a) !( x < 5 ) && !( y >= 7 )
    bool exp1 = !(x < 5) && !(y >= 7);
    bool exp1_equiv = (x >= 5) || (y < 7); // Usando las leyes de De Morgan
    cout << "Expresión a: " << (exp1 == exp1_equiv ? "Equivalente" : "No equivalente") << endl;

    // b) !( a == b ) || !( g != 5 )
    bool exp2 = !(a == b) || !(g != 5);
    bool exp2_equiv = (a != b) && (g == 5); // Usando las leyes de De Morgan
    cout << "Expresión b: " << (exp2 == exp2_equiv ? "Equivalente" : "No equivalente") << endl;

    // c) !( ( x <= 8 ) && ( y > 4 ) )
    bool exp3 = !( (x <= 8) && (y > 4) );
    bool exp3_equiv = (x > 8) || (y <= 4); // Usando las leyes de De Morgan
    cout << "Expresión c: " << (exp3 == exp3_equiv ? "Equivalente" : "No equivalente") << endl;

    // d) !( ( i > 4 ) || ( j <= 6 ) )
    bool exp4 = !( (i > 4) || (j <= 6) );
    bool exp4_equiv = (i <= 4) && (j > 6); // Usando las leyes de De Morgan
    cout << "Expresión d: " << (exp4 == exp4_equiv ? "Equivalente" : "No equivalente") << endl;

    return 0;
}
