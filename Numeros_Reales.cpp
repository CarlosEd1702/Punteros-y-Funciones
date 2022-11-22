// Ingresar por consola números reales que se vayan almacenando en un vector y 
// finalmente obtener como resultado la suma total del cuadrado de los números 
// que contiene dicho vector.

#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
int calcularSuma(int vec[], int);
int tam, suma=0;
int vec[10];
int* a;

int main()
{
    pedirDatos();
    a = vec;
    for (int i = 0; i < tam;i++) {
        suma = suma + *a++;
    }
    cout << "La suma de los numeros contenidos en el vector es: " << suma<<endl;
    cout << "El cuadrado de "<<suma<<" es: " << suma*suma;
    return 0;
}

void pedirDatos() {
    cout << "Ingresa la cantidad de numeros reales que contendra el Vector.\n";
    cin >> tam;

    for (int i = 0; i < tam; i++) {
        cout << i + 1 << ". Digite un numero: ";
        cin >> vec[i];
    }
}
