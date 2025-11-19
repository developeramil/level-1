#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Ededi daxil et: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i; 
        }
    }
    if (sum == n) {
        cout << n << " mukemmel ededdir." << endl;
    }
    else {
        cout << n << " mukemmel eded deyil." << endl;
    }
    return 0;
}
