// Hacer lo mismo que el 3 pero que además de devolverme el vector sin los números repetidos 
// también me lo devuelva ordenado de manera ascendente.
//

#include <iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main()
{
	int Inicial[50], Aux[50], Final[50];

	int n, i, j = 0, z = 0, x, k, temp, cont, num;

	cout << "Digite el numero de elementos del Vector: ";
	cin >> n;

	system("cls");

	cout << "Ingrese los elementos del Vector.\n";
	for (i = 0; i < n; i++)
	{
		cout << "Digite un numero: ";
		cin >> Inicial[i];
	}

	for (i = 0; i < n; i++)
	{
		cont = 0;

		num = Inicial[i];

		Aux[j] = num;

		j++;

		for (k = 0; k < n; k++)
		{
			if (Aux[k] == num)
			{
				cont++;
			}
		}

		if (cont == 1)
		{
			Final[z] = num;

			z++;
		}
	}

	for (i = 0; i < z; i++)
	{
		Final[i];
	}
	//Metodo de la burbuja
	for (i = 0; i < z-1; i++) {
		for (x = 0; x < z - 1;x++) {
			if (Final[x]>Final[x+1]) {
				temp = Final[x];
				Final[x] = Final[x + 1];
				Final[x + 1] = temp;
			}
		}
	}
	cout << "\nVector Final ordenado\n";
	for (i = 0; i < z;i++) {
		cout << Final[i] << ", ";
	}

	return 0;
}
