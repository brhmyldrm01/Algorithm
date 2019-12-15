#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int sayi,bilinmeyen ;
bas:
int sayac=1;
srand(time(NULL));
bilinmeyen=rand()%1000;
cout<<"sayi tahmin oyununa hosgeldiniz!!!!\n";
cout<<"bir sayi giriniz......";
cin>>sayi;
while(bilinmeyen !=sayi){
	sayac++;
if(sayi==bilinmeyen)
cout<<"bildin";
else if(bilinmeyen>sayi)
{cout<<"\nKUCUK GELDI\n"<<endl;
cout<<"bilemedin sayi gir =>>"<<endl;


cin>>sayi;
}
	
else if(sayi>bilinmeyen){
cout<<"\nBUYUK GELDI\n "<<endl;
cout<<"bilemedin sayi gir =>>"<<endl;
cin>>sayi;

}



}
cout<<"**-_-tebriker bildiniz-_-**\n";
cout<<sayac<<"   "<<"kere deneme sonucunda buldun....-,-\n";
goto bas;
system("pause");
return 0;
}
