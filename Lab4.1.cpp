#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;
void output(double *mass, int n)
{
	for (int i = 0; i< n; i++)
	{
		cout << " " << mass[i];
	}
	cout << endl;
}
int main()
{
	srand(time(0));
	double *mass;
	int n;
	cin >> n;
	mass = (double *)malloc(n * sizeof(double));
	for (int i = 0 ; i<n ; i++)
	{
		mass[i] = rand() % 9 + 1;
    }
	output(mass, n);
	for (int i = 0; i < n; i += 2)
	{
		mass[i] *= -1;
	}
	output(mass, n);
	free(mass);
	system("Pause");
}


