# include <iostream>
using namespace std;
int main(){
int n,ters=0;
cout<<"reqem daxil edin:";
cin>>n;

while(n!=0){
	int reqem=n%10;
	ters=ters*10+reqem;
	n/10;
}
cout<<"reqemin tersi:"<<ters<<endl;
	return 0;
	
	
	
	
}
