#include <iostream>
using namespace std;
int main(){
    int n,max=-999999;
    while(true){
        cin >> n;
        if(n==0) break;
        if(n>max) max=n;
    }
    cout << max;
}
