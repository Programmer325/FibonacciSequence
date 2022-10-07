#include <iostream>

using namespace std;


void fibonacciSequence(unsigned long long& lengthF)
{
    unsigned long long a = 0, b = 1;

    for (unsigned int i = 0; i < lengthF; i++)
    {
        if (i < 93) // PL: Sprawdzenie zakresu
        {
            cout << i + 1 << ". == " << b << endl;
            b = a + b;
            a = b - a;
        }
        else
        {
            cout << i + 1 << ". == " << "Out of range" << endl;
        }
    }

}


int main()
{
    unsigned long long lengthF = 0;
    unsigned int lengthTest = 0;


    cout << "Fibonacci Sequence" << endl;
    cout << "Enter the length: ";
    cin >> lengthTest; // PL: dlugosc Ciagu Fibonacciego przed testem
    cout << endl;

    if (lengthTest < 0) // PL: (Test) Sprawdzenie czy uzytkownik nie podal ujemnej dlugosci ciagu
    {
        cout << "Error!" << endl;
    }
    else
    {
        cout << "Data: " << endl;

        lengthF = lengthTest; // PL: Przypisanie poprawnej (dodatniej) wartosci do zmiennej
        fibonacciSequence(lengthF);
    }

    //system("pause");
    return 0;
}