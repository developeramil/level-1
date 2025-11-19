#include <iostream>
using namespace std;

int main() {
    double result, num;
    char op;

    cout << "Ilk ededi daxil et: ";
    cin >> result;

    while (true) {
        cout << "Emeliyyat (+, -, *, /) ve ya q (quit): ";
        cin >> op;

        if (op == 'q') break;

        cout << "Ededi daxil et: ";
        cin >> num;

        if (op == '+') result += num;
        else if (op == '-') result -= num;
        else if (op == '*') result *= num;
        else if (op == '/') {
            if (num != 0) result /= num;
            else {
                cout << "Sifira bolme mumkun deyil!" << endl;
                continue;
            }
        }
        else {
            cout << "Sehv emeliyyat!" << endl;
            continue;
        }

        cout << "Netice: " << result << endl; 
    }

    cout << "Son netice: " << result << endl;
    return 0;
}
