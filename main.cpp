#include <iostream>

using namespace std;

int main()
{
    char letra='A';
    for (int i=0; i<7 ;i++){
        for(int j=0; j<13; j++){
            if (j<=i){
                cout << letra;
                letra=letra+1;
                if (letra=='H'){
                    letra=letra -1;
                }
                continue;
            }
            if (j<12-i){
                cout << " ";
                continue;
            }
            if (j<13){
                letra =letra -1;
                cout<<letra;
            }
        }
        cout << '\n';
    }

    for (int i = 5; i >= 0; i--) {
        for (int j = 0; j < 13; j++) {
            if (j <= i) {
                cout << letra;
                letra = letra + 1;
                if (letra == 'H') {
                    letra = letra - 1;
                }
                continue;
            }
            if (j < 12 - i) {
                cout << " ";
                continue;
            }
            if (j < 13) {
                letra = letra - 1;
                cout << letra;
            }
        }
        cout << '\n';
    }

    //Punto #2 Escribe un algoritmo cuya entrada sea un número entero y muestra el resultado de la suma de
    //todos sus dígitos elevados a sí mismos.

    int numero;
    int sumaTotal = 0;

    cout << "Por favor ingrese el numero al que desea aplicarle la operacion: ";
    cin >> numero;

    string numeroStr = to_string(numero);

    for (int i = 0; i < numeroStr.length(); i++) {
        int numeroActual = numeroStr[i] - '0';
        int elevacion = 1;

        for (int j = 0; j < numeroActual; j++) {
            elevacion *= numeroActual;
        }

        sumaTotal += elevacion;
    }

    cout << "Despues de la operacion su resultado es: " << sumaTotal << endl;

    return 0;
}


