#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ededi daxil et: ";
    cin >> n;

    cout << "Bolenler: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << " ";
    }

    return 0;
}

