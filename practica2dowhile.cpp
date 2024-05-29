#include <iostream>

using namespace std;

int main() {
    int n;

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Introduce un número entero positivo: ";
    cin >> n;

    // Validar que el número ingresado sea positivo
    if (n <= 0) {
        cout << "El número debe ser un entero positivo." << endl;
        return 1;
    }

    // Calcular la suma de los números pares hasta n
    int suma = 0;
    int i = 0;

    do {
        if (i % 2 == 0) {
            suma += i;
        }
        ++i;
    } while (i <= n);

    // Mostrar la suma resultante al usuario
    cout << "La suma de los números pares hasta " << n << " es: " << suma << endl;

    return 0;
}