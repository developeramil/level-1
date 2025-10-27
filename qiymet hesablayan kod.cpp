#include <iostream>

using namespace std;

int main()
{
int a;
cout<<"balinizi daxil edin:";
cin>>a;
if(a<=50){cout<<"qiymetiniz F-dir";}
else if(50<a<60){cout<<"qiymetiniz E-dir";}
else if(60<a<70){cout<<"qiymetiniz D-dir";}
else if(70<a<80){cout<<"qiymetiniz c-dir";}
else if(80<a<90){cout<<"qiymetiniz B-dir";}
else if(90<a<100){cout<<"qiymetiniz A-dir";}
    return 0;
}
