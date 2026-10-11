#include <iostream>
#include <string>
using namespace std;

// Funcion de la persona A
double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

// Funcion de la persona B
string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    } else {
        return "Taquicardia";
    }
}

int main() {
    double fahrenheit;
    int lpm;

    cout << "Ingrese la temperatura en Fahrenheit: ";
    cin >> fahrenheit;

    cout << "Temperatura en Celsius: "
         << fahrenheitACelsius(fahrenheit) << endl;

    cout << "Ingrese la frecuencia cardiaca en lpm: ";
    cin >> lpm;

    cout << "Clasificacion: "
         << clasificarFrecuencia(lpm) << endl;

    return 0;
}