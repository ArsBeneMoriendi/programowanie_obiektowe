#include <iostream>

using namespace std;

int main()
{
    cout << "Witaj świecie" << endl;
    cout << "Podaj nazwe pliku: ";

    string fileName;
    cin >> fileName;

    int dot = fileName.find('.');
    
    cout << "Bazowa nazwa pliku: " << fileName.substr(0, dot) << endl;

    if (dot != -1)
    {
        cout << "Kropka jest na miejscu: " << dot << endl;        
        cout << "Rozszerzenie pliku: " << fileName.substr(dot + 1, fileName.length()) << endl;
    }
    else
    {
        cout << "Plik nie ma rozszerzenia" << endl;
    }

    return 0;
}