#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float calcularPromedio(float num1, float num2, float num3, float num4, float num5, float num6) {
    return (num1 + num2 + num3 + num4 + num5 + num6) / 6.0;
}

float calcularDesviacionEstandar(float num1, float num2, float num3, float num4, float num5, float num6, float promedio) {
    float suma = pow(num1 - promedio, 2) + pow(num2 - promedio, 2) + pow(num3 - promedio, 2) + pow(num4 - promedio, 2) + pow(num5 - promedio, 2) + pow(num6 - promedio, 2);
    return sqrt(suma / 6.0);
}

float calcularCoeficienteVariacion(float promedio, float desviacionEstandar) {
    return (desviacionEstandar / promedio) * 100.0;
}

float calcularCurtosis(float num1, float num2, float num3, float num4, float num5, float num6, float promedio) {
    float suma = pow(num1 - promedio, 4) + pow(num2 - promedio, 4) + pow(num3 - promedio, 4) + pow(num4 - promedio, 4) + pow(num5 - promedio, 4) + pow(num6 - promedio, 4);
    float n = 6.0;
    return (suma / n) / pow(calcularDesviacionEstandar(num1, num2, num3, num4, num5, num6, promedio), 4);
}

int main() {
    float num1{0.0f}, num2{0.0f}, num3{0.0f}, num4{0.0f}, num5{0.0f}, num6{0.0f};
    float promedio{0.0f}, desviacionEstandar{0.0f}, coeficienteVariacion{0.0f},curtosis{0.0f};

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    cout << "Ingrese el cuarto numero: ";
    cin >> num4;
    cout << "Ingrese el quinto numero: ";
    cin >> num5;
    cout << "Ingrese el sexto numero: ";
    cin >> num6;

   
    promedio = calcularPromedio(num1, num2, num3, num4, num5, num6);
    desviacionEstandar = calcularDesviacionEstandar(num1, num2, num3, num4, num5, num6, promedio);
    coeficienteVariacion = calcularCoeficienteVariacion(promedio, desviacionEstandar);
    curtosis = calcularCurtosis(num1, num2, num3, num4, num5, num6, promedio);

    cout << fixed << setprecision(6)<< "Promedio (AVG): " << promedio << endl;
    cout << fixed << setprecision(6)<<"Desviacion Estandar (SD): " << desviacionEstandar << endl;
    cout << fixed << setprecision(6)<<"Coeficiente de Variacion (CV): " << coeficienteVariacion << "%" << endl;
    cout << fixed << setprecision(6)<<"Curtosis (K): " << curtosis << endl;

    return 0;
}
