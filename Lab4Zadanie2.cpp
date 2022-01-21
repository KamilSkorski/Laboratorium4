#include <iostream>
using namespace std;

bool LiczbaPierwsza(int n);

int main()
{
	int n;
	cout << "Podaj dodatnia liczbe: ";
	cin >> n;
	if (LiczbaPierwsza(n))
		cout <<"Liczba "<<n<< " jest pierwsza";
	else cout <<"Liczba "<<n<< " nie jest pierwsza";
}
bool LiczbaPierwsza(int n)
{
	if (n < 2) return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}