// Contruye un programa que al recibir como datos dos vectores de tipo entero N y M respectivamente 
// (llenar los vectores por consola) genere un nuevo vector ordenado de forma descendente de N+M 
// (es decir, con el resultado de la suma de los vectores N y M).

#include <iostream>

using namespace std;

int i,j,tam, temp;
int vecN[100];
int vecM[100];
int vecO[200];

int main()
{
    cout << "Ingrese la cantidad de elementos que contrendan los vectores:\n";
    cin >> tam;

    cout << "Ingrese los numeros al vector N\n";
    for (int i = 0; i < tam;i++) {
        cout <<"Digite un numero: ";
        cin >> vecN[i];
    }

    cout << "\nIngrese los numeros al vector M\n";
    for (int i = 0; i < tam; i++) {
        cout << "Digite un numero: ";
        cin >> vecM[i];
    }

    //Ingresando los elemtos del vector N al vector O
    for (int i = 0; i < tam; i++) {
        vecO[i] = vecN[i];
    }

    //Ingresando los elemtos del vector M al vector O
    for (int i = 0; i < tam*2; i++) {
        vecO[i] = vecM[i];
    }

    //Mostrando el Vector en desorden
    cout << "\nVector desordenado:\n";
    for (int i = 0; i < tam * 2; i++) {
        cout<<vecO[i]<<", ";
    }

    cout << endl;

    //Metodo de la burbuja
    for (int i = 0; i < tam * 2;i++) {
        for (j = 0; j < (tam * 2) - 1; j++) {
            if (vecO[j] < vecO[j + 1]) {
                temp = vecO[j];
                vecO[j] = vecO[j + 1];
                vecO[j + 1] = temp;
            }
        }
    }

    //Mostrando el Vector en descendente
    cout << "\nVector ordenado descendentemente:\n";
    for (i = 0; i < tam * 2;i++) {
        cout << vecO[i] << ", ";
    }


}
