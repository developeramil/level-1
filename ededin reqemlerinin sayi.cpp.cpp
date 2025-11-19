#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Ededi daxil et: ";
    cin >> n;
    if (n < 0) n = -n;
    if (n == 0) {
        count = 1; 
    }
    else {
        while (n != 0) {
            n /= 10;   
            count++;   
        }
    }
    cout << "Ededin reqemlerinin sayi: " << count << endl;
    return 0;
}
