#include <iostream>
using namespace std;
int main(){
	int toplam;
	for(int a=1;a<1000000;a++){
	toplam=0;
		for(int i=1;i<a;i++){
			if(a%i==0)
			toplam+=i;		

			}
				if(toplam==a)
				cout<<a<<"muhtesem sayi"<<endl;


	}

system("pause");
return 0;}
