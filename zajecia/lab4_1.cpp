/*
  "Jak długo program liczy do 4 miliardów"
  Napisać program, który zweryfikuje czy liczba
  16'000'000'000'000'000'001 jest pierwsza.

*/

#include <iostream>

using namespace std;

int main()
{
    unsigned long n = 16'000'000'000'000'000'001;

    if (n % 2 == 0) 
    {
        cout << "Podzielna przez 2" << endl;
        return 0;
    }

    for(int i = 2; i < n/2; i+= 2)
    {
        if (n % i == 0) 
        {
            cout << "Podzielna przez " << i << endl;
            return 0;
        }
    }

    cout << "Liczba jest pierwsza" << endl;
    return 0;
}