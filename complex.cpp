#include "complex.hpp"

int main() {
    complex_number<double> c1(1.2, 2.3);
    complex_number<double> c2(3.4, -4.5);

    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;

    // Somma di numeri complessi
    complex_number<double> sum = c1 + c2;
    std::cout << "Somma: " << sum << std::endl;

    // Moltiplicazione di numeri complessi
    complex_number<double> prod = c1 * c2;
    std::cout << "Prodotto: " << prod << std::endl;

    // Modulo di un numero complesso
    std::cout << "Modulo di c1: " << abs(c1) << std::endl;

    // Coniugato
    std::cout << "Coniugato di c1: " << conjugate(c1) << std::endl;
    
    complex_number<float> c3(1.5f, 2.4f);
    complex_number<float> c4(3.3f, -4.2f);

    std::cout << "c3: " << c3 << std::endl;
    std::cout << "c4: " << c4 << std::endl;

    // Somma di numeri complessi
    complex_number<float> somma = c3 + c4;
    std::cout << "Somma: " << somma << std::endl;

    // Moltiplicazione di numeri complessi
    complex_number<float> prodotto = c3 * c4;
    std::cout << "Prodotto: " << prodotto << std::endl;

    // Modulo di un numero complesso
    std::cout << "Modulo di c3: " << abs(c3) << std::endl;

    // Coniugato
    std::cout << "Coniugato di c4: " << conjugate(c4) << std::endl;


    return 0;
}
