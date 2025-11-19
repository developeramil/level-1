#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nece eded daxil edeceksiniz? ";
    cin >> N;

    int num;
    int sumEven = 0; 
    int sumOdd = 0;  

    for (int i = 0; i < N; i++) {
        cout << "Ededi daxil et: ";
        cin >> num;

        if (i % 2 == 0) {
            sumEven += num; 
        }
        else {
            sumOdd += num;  
        }
    }

    cout << "Cut indekslerdeki ededlerin cemi: " << sumEven << endl;
    cout << "Tek indekslerdeki ededlerin cemi: " << sumOdd << endl;

    return 0;
