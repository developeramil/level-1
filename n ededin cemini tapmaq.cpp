#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, num;

    cout << "Nece eded daxil etmek isteyirsiz? ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i << "-ci ededi daxil et: ";
        cin >> num;
        sum += num; 
    }

    cout << "Ededlerin cemi: " << sum << endl;

    return 0;
}
