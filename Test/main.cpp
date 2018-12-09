#include <iostream>

using namespace std;

int main()
{

    int a, b, wynik;
    cout << "Hello world!" << endl; //witamy sie ze swiatem
    cout << "Obliczymy pole kwadrata." << endl;
    cout << "Podaj dlugosc pierwszego boku w centymetrach: ";
    cin >> a; //wpisujemy dlugosc boku
    cout << endl;
    cout << "Podaj dlugosc drugiego boku, rowniez w centymetrach: ";
    cin >> b;
    cout << endl;
    wynik = a * b;


    cout << "Pole kwadrata wynosi: " <<  wynik << "cm" << endl;


    return 0;
}
