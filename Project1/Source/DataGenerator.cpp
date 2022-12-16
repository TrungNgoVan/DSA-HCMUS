#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>
using namespace std;

template <class T>
void Permutation(T &a, T &b)
{
	T x = a;
	a = b;
	b = x;
}

// Function to generate random array of data
void GenerateRandomData(int a[], int n)
{
	ofstream Data("dataRandom.txt");
	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % n*5;
		Data << a[i] << " ";
	}
	Data.close();
}
// Function to generate data array in reverse order (descending)
void GenerateReverseData(int a[], int n)
{
	ofstream Data("dataReverse.txt");
	for (int i = 0; i < n; i++)
	{
		a[i] = n - 1 - i;
		Data << a[i] << " ";
	}
	Data.close();
}

// Function that generates an nearly ordered array of data
void GenerateNearlySortedData(int a[], int n)
{
	ofstream Data("dataNearlySorted.txt");
	for (int i = 0; i < n; i++)
	{
		a[i] = i;
	}
	srand((unsigned int)time(NULL));
	for (int i = 0; i < n/1000; i++)
	{
		int r1 = rand() % n;
		int r2 = rand() % n;
		Permutation(a[r1], a[r2]);
	}
	for (int i = 0; i < n; i++)
	{
		Data << a[i] << " ";
	}
	Data.close();
}

int main()
{
	int size = 10000; // Size
	int a[size + 1];
	int n = size;
	GenerateRandomData(a, n);
	GenerateNearlySortedData(a,n);
	GenerateReverseData(a,n);
	return 0;
}
