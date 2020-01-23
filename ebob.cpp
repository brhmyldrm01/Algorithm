#include <iostream>
using namespace std;
int main(){int ebob=1,a,b,buyuk;
	cout<<"iki sayi giriniz";
cin>>a>>b;
 if(a>b)
buyuk=a;
else
buyuk=b;

for(int i=2;i<=buyuk;i++){
	if(a%i==0&&b%i==0)
	{
		a/=i;
		b/=i;
		ebob*=i;
		i=1;}
}

cout<<ebob;
system("pause");
return 0;
}
