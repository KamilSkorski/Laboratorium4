#include <iostream>
using namespace std;

float kolo(float r);
float prostokat(float a, float b);
float trojkat(float a, float h);
void szescian(float a);
void walec(float r, float h);

int main()
{
    float a, b, r, h;
    cout << "Podaj a: ", cin >> a;
    cout << "Podaj b: ", cin >> b;
    cout << "Podaj r: ", cin >> r;
    cout << "Podaj h: ", cin >> h;

    if (a > 0 && b > 0 && r > 0 && h > 0)
    {
        cout << "Pole kola: " << kolo(r)<<endl;
        cout << "Pole prostokata: " << prostokat(a, b)<<endl;
        cout << "Pole trojkata: " << trojkat(a, h)<<endl;
        szescian(a);
        cout << endl;
        walec(r, h);
    }
    else cout << "Bledne dane"<<endl;
}

float kolo(float r)
{
    return 3.14 * r * r;
}
float prostokat(float a, float b)
{
    return a * b;
}
float trojkat(float a, float h)
{
    return (a * h) / 2;
}
void szescian(float a)
{
    cout << "Pole szescianu: " << (a * a) * 6<< endl;
    cout << "Objetosc szescianu: " << (a * a * a)<<endl;
}
void walec(float r, float h)
{
    cout << "Pole walca: " << 2 * (3.14 * r * r) + 2 * (3.14 * r * h)<<endl;
    cout << "Objetosc walca: " << 3.14 * (r * r) * h<<endl;
}