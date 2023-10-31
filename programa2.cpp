#include <iostream>
#include <cmath>
using namespace std;

float a{0.0f},b{0.0f};
float area{0.0f}, ang{0.0f}, angRad{0.0f};
int main() {

cout << "Ingresa la medida del lado 1: ";
cin >> a;
cout << "Ingresa la medida del lado 2: ";
cin >> b;
cout << "Ingrese la medida del angulo alpha: ";
cin >> ang;

angRad=ang*(M_PI/180);

area=((a*b)*(sin(angRad)))*1/2;

cout<<"El area es de: "<<area<<endl;


return 0;
}
