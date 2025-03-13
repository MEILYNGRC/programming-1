#include <iostream>
#include <string>

class Empleado {
private:
    std::string nombre;
    std::string apellido;
    int salarioMensual;

public:
    // Constructor
    Empleado(std::string _nombre, std::string _apellido, int _salarioMensual) {
        nombre = _nombre;
        apellido = _apellido;
        salarioMensual = (_salarioMensual > 0) ? _salarioMensual : 0;
    }

    // Métodos establecer (set)
    void establecerNombre(std::string _nombre) { nombre = _nombre; }
    void establecerApellido(std::string _apellido) { apellido = _apellido; }
    void establecerSalario(int _salarioMensual) { salarioMensual = (_salarioMensual > 0) ? _salarioMensual : 0; }

    // Métodos obtener (get)
    std::string obtenerNombre() const { return nombre; }
    std::string obtenerApellido() const { return apellido; }
    int obtenerSalarioMensual() const { return salarioMensual; }
    int obtenerSalarioAnual() const { return salarioMensual * 12; }

    // Método para aumentar el salario en un porcentaje
    void aumentarSalario(float porcentaje) {
        salarioMensual += salarioMensual * (porcentaje / 100);
    }
};

int main() {
    // Crear dos objetos Empleado
    Empleado empleado1("Juan", "Perez", 3000);
    Empleado empleado2("Maria", "Lopez", -2000);  // Salario inválido, se establecerá en 0

    // Mostrar salarios anuales
    std::cout << "Salario anual de " << empleado1.obtenerNombre() << " " << empleado1.obtenerApellido() << ": $" << empleado1.obtenerSalarioAnual() << "\n";
    std::cout << "Salario anual de " << empleado2.obtenerNombre() << " " << empleado2.obtenerApellido() << ": $" << empleado2.obtenerSalarioAnual() << "\n";

    // Aumentar salario en 10%
    empleado1.aumentarSalario(10);
    empleado2.aumentarSalario(10);

    // Mostrar salarios anuales después del aumento
    std::cout << "Salario anual de " << empleado1.obtenerNombre() << " después del aumento: $" << empleado1.obtenerSalarioAnual() << "\n";
    std::cout << "Salario anual de " << empleado2.obtenerNombre() << " después del aumento: $" << empleado2.obtenerSalarioAnual() << "\n";

    return 0;
}
