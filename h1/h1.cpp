#include <iostream>
#include <iomanip>      
#include <stdexcept>


using namespace std;


void calcSum(int a, int b) {
    cout << "calcSum: Summa = " << a + b << endl;
}


void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "calcDiv: Virhe - nollalla jako ei ole sallittua." << endl;
    } else {
        float result = static_cast<float>(a) / b;
        cout << "calcDiv: Osamäärä = " << fixed << setprecision(2) << result << endl;
    }
}


int retSum(int a, int b) {
    return a + b;
}


float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla negatiivinen.");
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a, b;

    
    cout << "Anna kokonaisluku a: ";
    cin >> a;

    cout << "Anna kokonaisluku b: ";
    cin >> b;

    
    calcSum(a, b);
    calcDiv(a, b);

   
    int summa = retSum(a, b);
    cout << "retSum: Summa = " << summa << endl;

    try {
        float result = retDiv(a, b);
        cout << "retDiv: " << a << " / " << b << " = " << fixed << setprecision(2) << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
