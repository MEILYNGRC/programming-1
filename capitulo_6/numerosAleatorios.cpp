#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla para números aleatorios

    // a) 1 ≤ n ≤ 2
    int n1 = rand() % 2 + 1;
    cout << "a) " << n1 << endl;

    // b) 1 ≤ n ≤ 100
    int n2 = rand() % 100 + 1;
    cout << "b) " << n2 << endl;

    // c) 0 ≤ n ≤ 9
    int n3 = rand() % 10;
    cout << "c) " << n3 << endl;

    // d) 1000 ≤ n ≤ 1112
    int n4 = rand() % 113 + 1000;
    cout << "d) " << n4 << endl;

    // e) -1 ≤ n ≤ 1
    int n5 = rand() % 3 - 1;
    cout << "e) " << n5 << endl;

    // f) -3 ≤ n ≤ 11
    int n6 = rand() % 15 - 3;
    cout << "f) " << n6 << endl;

    return 0;
}
