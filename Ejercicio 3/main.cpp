#include <iostream>

namespace Geometria {

    class Circulo {
    private:
        double radio;

    public:

        Circulo(double r) : radio(r) {}

        double calcularArea() const {
            return 3.141592653589793 * radio * radio;
        }

        double calcularPerimetro() const {
            return 2 * 3.141592653589793 * radio;
        }

    };
}

int main() {

    double radioCirculo = 5.0;

    Geometria::Circulo miCirculo(radioCirculo);

    std::cout << "Area del circulo: " << miCirculo.calcularArea() << std::endl;
    std::cout << "Perimetro del circulo: " << miCirculo.calcularPerimetro() << std::endl;

    return 0;
}