#include <iostream>
#include <complex>

void computeMandelbrot(double cx, double cy, int iterations) {
    std::complex<double> z(0, 0); // Initialisation de z avec z0 = 0
    std::complex<double> c(cx, cy); // Initialisation de c avec les coordonnées

    std::cout << "Suite de Mandelbrot pour C(" << cx << ", " << cy << "):\n";
    
    for (int n = 0; n < iterations; ++n) {
        // Calculer le module de z
        double modulus = std::norm(z); // |z|^2 = z_r^2 + z_i^2
        if (modulus >= 4) {
            break; // Si le module est supérieur ou égal à 4, on sort de la boucle
        }
        
        std::cout << "z(" << n << ") = (" << z.real() << ", " << z.imag() << ")\n";
        
        // Calculer zn+1
        std::complex<double> zn_next = z * z + c; // zn+1 = zn^2 + c
        z = zn_next; // Mettre à jour z
    }
}

int main() {
    double cx, cy;
    int n;

    std::cout << "Entrez les coordonnées de C (cx, cy): ";
    std::cin >> cx >> cy;
    std::cout << "Entrez le nombre d'itérations (n): ";
    std::cin >> n;

    computeMandelbrot(cx, cy, n);
    
    return 0;
}

    

