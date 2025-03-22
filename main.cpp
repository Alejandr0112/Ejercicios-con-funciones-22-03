#include <iostream>
using namespace std;

void sumar() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "Suma: " << (a + b) << endl;
}

void restar() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "Resta: " << (a - b) << endl;
}

void multiplicar() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "Multiplicacion: " << (a * b) << endl;
}

void dividir() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "No se puede dividir por cero" << endl;
    } else {
        cout << "Division: " << (a / b) << endl;
    }
}

void potencia() {
    int base, exp, resultado = 1;
    cout << "Ingrese base y exponente: ";
    cin >> base >> exp;
    for(int i = 0; i < exp; i++) {
        resultado *= base;
    }
    cout << "Potencia: " << resultado << endl;
}

void raiz_cuadrada() {
    int n, raiz = 0;
    cout << "Ingrese un numero: ";
    cin >> n;
    while (raiz * raiz <= n) {
        raiz++;
    }
    cout << "Raiz Cuadrada Aproximada: " << (raiz - 1) << endl;
}