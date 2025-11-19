#include <iostream>
using namespace std;

int main() {
    int n, a, b = 0, c;

    cout << "Ededi daxil et: ";
    cin >> n;

    a = n; 

    while (n != 0) {
        c = n % 10;       
        b = b * 10 + c;  
        n = n / 10;       
    }

    cout << "Tersine cevrilmis eded: " << b << endl;

    if (a == b)
        cout << "Bu eded PALINDROMDUR." << endl;
    else
        cout << "Bu eded palindrom deyil." << endl;

    return 0;
