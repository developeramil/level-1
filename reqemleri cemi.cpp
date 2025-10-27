#include <iostream>
using namespace std;

int main(){
int n,cem;
cem=0;
cout<<"Ededi daxil edin:";
cin>>n;
  while(n!=0){
    cem +=n%10;
    n/=10;

  }
 cout<<"Reqemlerin cemi"<<cem<<endl;


    return 0;
}