//Calcula el producto de dos vectores y almacena el resultado en otro vector.
#include <iostream>

using namespace std;
void pedirVectores();
int productopunto(int*, int*, int);
int vec1[15];
int vec2[15];
int vec3[15];
int tam;

int main()
{
    pedirVectores();
    cout << "El producto punto es: " << productopunto(vec1, vec2, tam) << endl;
    return 0;
}

void pedirVectores() {
    cout << "Bienvenido, con este algoritmo es posible calcular el producto punto de 2 vectores.\n";
    cout << "Ingrese la cantidad de elementos contendios en los vectores:\n";
    cin >> tam;

    for (int i = 0; i < tam;i++) {
        cout << "Ingrese el Vector 1: ";
        cin >> vec1[i];
    }

    for (int i = 0; i < tam; i++) {
        cout << "Ingrese el Vector 2: ";
        cin >> vec2[i];
    }
}

int productopunto(int * p1, int * p2, int tam) {
    int producto = 0;

    for (int i = 0; i < tam; i++) {
        producto = producto + *(p1 + i) * *(p2 + i);
    }
    return producto;
}