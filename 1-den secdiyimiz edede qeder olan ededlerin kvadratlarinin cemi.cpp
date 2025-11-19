#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Ededi daxil et: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {  
        sum += i * i;                  
    }

    cout << "1-den " << n << "-e qeder olan cut ededlerin kvadratlarinin cemi: " << sum << endl;

    return 0;
}
