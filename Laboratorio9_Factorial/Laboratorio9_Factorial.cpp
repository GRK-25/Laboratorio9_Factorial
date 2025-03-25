#include <iostream>
using namespace std;
// Función recursiva para calcular el factorial
int factorial(int n) {
	if (n < 0) {
		throw invalid_argument("Error: Factorial de un numero negativo no esta definido.");
	}
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}
int main() {

	try {
		int numero;
		cout << "Introduce un numero para calcular el factorial: ";
		cin >> numero;
		int resultado = factorial(numero);
		cout << "El factorial de " << numero << " es: " << resultado << endl;
	}
	catch (const exception& e) {
		cerr << "Excepcion capturada: " << e.what() << endl;

	}
	catch (...) {
		cerr << "Se ha producido un error desconocido." << endl;
	}



	return 0;
}
