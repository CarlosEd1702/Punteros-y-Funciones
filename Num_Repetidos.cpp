// Ingresar por consola números enteros que se vayan almacenando en un vector 
// y que me devuelva el mismo vector pero sin los números repetidos.
//


#include <iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main()
{
	int Inicial[50], Aux[50], Final[50];

	int n, i, j = 0, z = 0, k, cont, num;

	cout<<"Digite el numero de elementos del Vector: ";
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

	cout<<"\nVector Final sin repeticiones\n";

	for (i = 0; i < z; i++)
	{
		cout<< Final[i] << ",";
	}
	return 0;
}
