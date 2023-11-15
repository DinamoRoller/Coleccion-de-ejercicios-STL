#include <iostream>

namespace Matematicas {
    double  suma(double a, double b) {
        return a + b;
    }

    double resta(double a, double b) {
        return a - b;
    }
}

int main() {

    double num1 = 10.5;
    double num2 = 5.3;

    double resultado_suma = Matematicas::suma(num1, num2);
    double resultado_resta = Matematicas::resta( num1, num2);

    std::cout << "Resultado de la suma: " << resultado_suma << std::endl;
    std::cout << "Resultado de la resta: " << resultado_resta << std::endl;

    return 0;
}