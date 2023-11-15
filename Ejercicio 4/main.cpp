#include <iostream>

namespace Ciencia {

    namespace Fisica {
        const double velocidadDeLaLuz = 299792458.0;

        double calcularEnergia(double masa) {
            return masa * velocidadDeLaLuz * velocidadDeLaLuz;
        }
    }
}

int main() {

    double masa = 1.0;

    std::cout << "Velocidad de la luz: " << Ciencia::Fisica::velocidadDeLaLuz << " m/s\n";

    double energia = Ciencia::Fisica::calcularEnergia(masa);
    std::cout << "Energia para una masa de " << masa << " kg: " << energia << " julios\n";

    return 0;
}