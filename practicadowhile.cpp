#include <iostream>

using namespace std;

int main() {
// Número secreto fijo
    const int numero_secreto = 35;
    int intento;
    int numero_intentos = 0;

    cout << "Adivina el número secreto entre 1 y 100." << endl;

    // Bucle do-while para que el usuario adivine
    do {
        cout << "Introduce un numero para adivinar: ";
        cin >> intento;
        numero_intentos++;

        if (intento > numero_secreto) {
            cout << "El número secreto es menor." << endl;
        } else if (intento < numero_secreto) {
            cout << "El número secreto es mayor." << endl;
        } else {
            cout << "¡Felicidades! Has adivinado el número." << endl;
            cout << "Te tomó " << numero_intentos << " intentos en adivinar el numero." << endl;
        }
    } while (intento != numero_secreto);
 return 0;
}

    
    
    
    
   
   