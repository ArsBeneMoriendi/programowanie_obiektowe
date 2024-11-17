/*
  "Trójkąty"

  Napisz program, który pobierze od użytkownika 3 liczby zmiennoprzecinkowe
  i na ich podstawie poda obwód i pole trójkąta (wzór Herona).

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    float a, b, c;

    cout << "Wprowadź długości boków trójkąta: " << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    float obwod = a + b + c;

    float pol_obwodu = obwod / 2;

    float pole = sqrt(pol_obwodu * (pol_obwodu - a) * (pol_obwodu - b) * (pol_obwodu - c));

    cout << "Obwód trójkąta: " << obwod << endl;
    cout << "Pole trójkąta: " << pole << endl;

    return 0;
}