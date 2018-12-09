#include <iostream>

using namespace std;

int main()
{

    int wiek, a, b, wynik;
    cout << "Hello world!" << endl; //witamy sie ze swiatem
    cout << "Podaj swoj wiek" << endl;
    cin >> wiek; //uzytkownik wpisuje wiek
    cout << "Obliczymy pole kwadrata." << endl;
    cout << "Podaj dlugosc pierwszego boku";
    cin >> a; //wpisujemy dlugosc boku
    cout << "Podaj dlugosc drugiego boku";
    cin >> b;
    cout << endl;
    wynik = a * b;


    cout << "Pole kwadrata wynosi: " wynik;


    return 0;
}
