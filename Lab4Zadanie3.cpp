#include <iostream>
using namespace std;
void Binarnie(int liczba);
int main()
{
    int liczba;
    cout << "Podaj liczbe: ", cin >> liczba;
    cout << "Postac binarna liczby " << liczba << " to: ";
    Binarnie(liczba);

}

void Binarnie(int liczba)
{
    int i = 0;
    int tab[31];
    while (liczba)
    {
        tab[i++] = liczba % 2;
        liczba /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << tab[j];
    }
}
