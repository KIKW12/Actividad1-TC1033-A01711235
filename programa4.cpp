#include <iostream>
using namespace std;

int calcularAño(int edadActual, int añoActual) {
    int año100 = añoActual + (100 - edadActual);
    return año100;
}

int main() {
    int edadActual, añoActual;

    cout << "Ingrese su edad actual: ";
    cin >> edadActual;

    cout << "Ingrese el año actual: ";
    cin >> añoActual;

    int añoCumplira100 = calcularAño(edadActual, añoActual);

    cout << "Usted cumplira 100 años en el año " << añoCumplira100 << "." << endl;

    return 0;
}
