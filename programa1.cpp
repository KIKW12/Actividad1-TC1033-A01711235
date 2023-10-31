#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

float vCubo{0.0f};
float lado{0.0f};
cout << "Ingresa el volumen del cubo: ";
cin >> vCubo;

lado = pow(vCubo,1/3.0f);

cout << fixed << setprecision(2) << "El lado del cubo de volumen " << vCubo <<"cm^3" << " es " << lado << "cm";

    return 0;
}
