#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Decimal   Binary   Octal   Hexadecimal" << endl;

    for (int i = 1; i <= 256; i++) {
        cout << dec << i << "      ";
        cout << setw(8) << setfill('0') << hex << i << "   ";
        cout << oct << i << "     ";
        cout << setw(4) << setfill('0') << i << endl;
    }

    return 0;
}
