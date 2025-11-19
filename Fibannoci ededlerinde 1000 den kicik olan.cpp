#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 1; 
    cout << "1000-den kicik Fibonacci ededler:\n";
    while (a < 1000) {
        cout << a << " ";

        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}
