#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");


	int n, f = 1;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
}