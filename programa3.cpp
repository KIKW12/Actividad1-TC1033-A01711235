#include <iostream>
using namespace std;

int main() {
    int numRegalos{0}, numInvitados{0};

    cout << "Ingrese el numero de regalos: ";
    cin >> numRegalos;

    cout << "Ingrese el numero de invitados: ";
    cin >> numInvitados;

    int regalosPorInvitado = numRegalos / numInvitados;
    int regalosSobrantes = numRegalos % numInvitados;

    cout << "Cada invitado recibe " << regalosPorInvitado << " regalos." << endl;
    cout << "Sobran " << regalosSobrantes << " regalos." << endl;

    return 0;
}
