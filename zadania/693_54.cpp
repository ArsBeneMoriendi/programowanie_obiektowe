/* 
  LIV/693 Opus Magnum (Tom 2) 

  Napisz funkcję, która w stringu (przysłanym jej jako argument) zamieni znaki w taki
  sposób, że znaki parzyste będą napisane wielkimi literami, a nieparzyste - małymi.
  Wynik pracy zapisany w obiekcie klasy string ma być rezultatem zwracanym przez tę funkcję.

*/


#include <iostream>
#include <string>

using namespace std;

string changeSize(const string& text)
{
    string output;

    for (size_t i = 0; i < text.length(); i++)
    {
        if (i % 2 == 0)
        {
            output += toupper(text[i]);
        }
        else
        {
            output += tolower(text[i]);
        }
    }

    return output;
}

int main() 
{
    cout << "Wprowadź tekst do modyfikacji (bez spacji): ";
    string input;
    cin >> input;

    string output = changeSize(input);
    cout << "Tekst po modyfikacji: " << output << endl;

    return 0;
}
