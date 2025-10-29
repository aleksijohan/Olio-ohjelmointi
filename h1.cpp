#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <limits>
#include <windows.h>

using namespace std;

void calcSum(int a, int b) {
    cout << "Summa = " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe - nollalla jako ei ole sallittua." << endl;
    } else if (b < 0) {
        cout << "Virhe - negatiivisella luvulla jako ei ole sallittua." << endl;
    } else {
        float result = static_cast<float>(a) / b;
        cout << "Osamäärä = " << fixed << setprecision(2) << result << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla.");
    }
    if (b < 0) {
        throw runtime_error("jakaja ei saa olla negatiivinen.");
    }
    return static_cast<float>(a) / b;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;

    cout << "Anna kokonaisluku a: ";
    cin >> a;

    cout << "Anna kokonaisluku b: ";
    cin >> b;

    
    calcSum(a, b);
    calcDiv(a, b);


    int summa = retSum(a, b);
    cout << "Summa = " << summa << endl;

    
    try {
        float result = retDiv(a, b);
        cout << a << " / " << b << " = " << fixed << setprecision(2) << result << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    
    cout << "Paina Enter sulkeaksesi ohjelman...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}