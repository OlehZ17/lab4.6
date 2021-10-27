#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int  i, k;
	P = 1;
	i = 1;
	while (i <= 15)
	{
		S = 0;
		k = 1;
		while (k <= i)
		{
			S += 1 / k;
			k++;
		}
		P *= (sin(1. * i) * sin(1. * i) + cos(1. * S) * cos(1. * S)) / i * i;
		i++;
	}
	cout << P << endl;
	P = 1;
	i = 1;
	do
	{
		S = 0;
		k = 1;
		do
		{

			S += 1 / k;
			k++;
		} while (k <= i);
		P *= (sin(1. * i) * sin(1. * i) + cos(1. * S) * cos(1. * S)) / i * i;
		i++;
	} while (i <= 15);
	cout << P << endl;
	P = 1;
	for (i = 1; i <= 15; i++)
	{
		S = 0;
		for (k = 1; k <= i; k++)
		{
			S += 1 / k;
		}
		P *= (sin(1. * i) * sin(1. * i) + cos(1. * S) * cos(1. * S)) / i * i;
	}
	cout << P << endl;
	P = 1;
	for (i = 15; i >= 1; i--)

	{
		S = 0;
		for (k = i; k >= 1; k--)

		{
			S += 1 / k;
		}
		P *= (sin(1. * i) * sin(1. * i) + cos(1. * S) * cos(1. * S)) / i * i;
	}
	cout << P << endl;
	return 0;
}