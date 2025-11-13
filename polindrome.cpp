#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=1000;i++){
        int n=i, t=0;
        while(n>0){
            t=t*10+n%10;
            n/=10;
        }
        if(t==i) cout << i << " ";
    }
}
