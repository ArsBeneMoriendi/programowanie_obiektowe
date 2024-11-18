/*
  "Trójkąty"

  Napisz program, który pobierze od użytkownika 3 liczby zmiennoprzecinkowe
  i na ich podstawie poda obwód i pole trójkąta (wzór Herona).

  Dodatkowo: 
  - sprawdzenie, czy można z boków zbudować trójkąt
  - czy prostokątny
  - czy równoboczny
  - czy równoramienny

*/

#include <iostream>
#include <cmath>

using namespace std;

class Trojkat
{
    private:
    float a, b, c;

    public:
    void wczytaj()
    {
        cout << "Wprowadź długości boków trójkąta: " << endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
    }

    bool poprawne()
    {
        if (a + b <= c || a + c <= b || b + c <= a)
        {
            return false;            
        }
        else
        {
            return true;            
        }
    }

    bool czyProstokatny()
    {
        return (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b);
    }

    bool czyRownoboczny()
    {
        return (a == b && b == c);
    }

    bool czyRownoramienny()
    {
        return (a == b || b == c || a == c);
    }

    float obwod()
    {
        return a + b + c;
    }

    float pole()
    {
        float pol_obwodu = obwod()/2;
        return sqrt(pol_obwodu * (pol_obwodu - a) * (pol_obwodu - b) * (pol_obwodu - c));
    }
};

int main() 
{
    Trojkat t;
    t.wczytaj();

    if(t.poprawne() == false)
    {
        cout << "Z podanych boków nie można zbudować trójkąta" << endl;
        return 0;
    }

    if(t.czyProstokatny())
    {
        cout << "Trójkąt jest prostokątny" << endl;        
    }

    if(t.czyRownoboczny())
    {
        cout << "Trójkąt jest równoboczny" << endl;        
    }

    if(t.czyRownoramienny())
    {
        cout << "Trójkąt jest równoramienny" << endl;        
    }

    cout << "Obwód trójkąta: " << t.obwod() << endl;
    cout << "Pole trójkąta: " << t.pole() << endl;

    return 0;
}