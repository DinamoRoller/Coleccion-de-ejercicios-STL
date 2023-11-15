// main.cpp
#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"

int main() {
    // Utilizando la función calcularAreaTriangulo del espacio de nombres Geometria
    double baseTriangulo = 4.0;
    double alturaTriangulo = 5.0;
    double areaTriangulo = Geometria::calcularAreaTriangulo(baseTriangulo, alturaTriangulo);

    std::cout << "Área del triángulo: " << areaTriangulo << std::endl;

    // Utilizando la función calcularAreaCirculo del espacio de nombres Geometria
    double radioCirculo = 3.0;
    double areaCirculo = Geometria::calcularAreaCirculo(radioCirculo);

    std::cout << "Área del círculo: " << areaCirculo << std::endl;

    return 0;
}
