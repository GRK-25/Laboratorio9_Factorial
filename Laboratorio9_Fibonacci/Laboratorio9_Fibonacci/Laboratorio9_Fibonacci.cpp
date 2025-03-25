#include <iostream>
#include <stdexcept>
using namespace std;

int fibonacci(int n) {
    if (n < 0) {
        throw invalid_argument("Error: La serie de Fibonacci no está definida para números negativos.");
    }
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    try {
        int numero;
        cout << "Introduce un número para mostrar su serie Fibonacci: ";
        cin >> numero;
        int num = fibonacci(numero);


        cout << "Serie Fibonacci hasta la posición " << numero << ":" << endl;

        for (int i = 0; i <= numero; i++) {
            int num1 = fibonacci(i);

            cout << fibonacci(i) << " ";
        }
        cout << endl;


    }
    catch (const exception& e) {
        cerr << "Excepción capturada: " << e.what() << endl;
    }

    return 0;
}
