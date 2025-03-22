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

void factorial() {
    int n, fact = 1;
    cout << "Ingrese un numero: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial: " << fact << endl;
}

void menu() {
    cout << "\n--- CALCULADORA VIRTUAL! ---\n";
    cout << "Bienvenido a tu calculadora virtual, emepcemos. \n";
    cout << "1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Potencia\n6. Raiz Cuadrada\n7. Factorial\n8. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    int opcion;
    do {
        menu();
        cin >> opcion;
        switch(opcion) {
            case 1: sumar(); break;
            case 2: restar(); break;
            case 3: multiplicar(); break;
            case 4: dividir(); break;
            case 5: potencia(); break;
            case 6: raiz_cuadrada(); break;
            case 7: factorial(); break;
        }
    } while(opcion != 8);
    return 0;
}