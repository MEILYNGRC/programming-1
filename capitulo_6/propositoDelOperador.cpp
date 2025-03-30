class MiClase {
public:
    static int valor;
};

int MiClase::valor = 10;

int main() {
    // Usando el operador de resolución de ámbito para acceder al miembro estático
    std::cout << MiClase::valor << std::endl;
    return 0;
}

