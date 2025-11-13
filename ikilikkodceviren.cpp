#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s="";
    while(n>0){
        s=char(n%2+'0')+s;
        n/=2;
    }
    cout << s;
}

