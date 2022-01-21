#include <iostream>
using namespace std;
long long dwusilnia(int n);
int main()
{
	int n;
	cout << "Podaj liczbe: ", cin >> n;
	cout << dwusilnia(n);
}
long long dwusilnia(int n)
{
	long long wynik = 1;
	for (; n > 1; n -= 2)
		wynik *= n;
	return wynik;
}
