#include <iostream>
using namespace std;
int main(){
    int n,m,t=0;
    cin >> n;
    m=n;
    while(n>0){
        t=t*10+n%10;
        n/=10;
    }
    if(t==m) cout << "beraber";
    else cout << "ferqli";
}
