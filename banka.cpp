#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
struct bankahesabi{
	int hesapno;
	float bakiye;
	string hesapsahibi;
	int hesaptipi;//0 vadeli 1 vadesiz
	int hhsayisi;
	int hareketler[100];
	hesap(int a){
		a=0;
		bakiye=a;
		hhsayisi=a;
	}
	void paracek(float cmiktar){
	if(cmiktar>bakiye){
		cout<<"yetersiz bakiye"<<endl;
	}
	else
	{	hareketler[hhsayisi]=(-1*cmiktar);
		//hareketler[hhsayisi]=(bakiye-cmiktar);
		hhsayisi++;
		bakiye=bakiye-cmiktar;
		cout<< "islem basarili hesap hareketlerini kontrol ediniz";
	}}
	
	void  parayatir(float ymiktar){
		bakiye=bakiye+ymiktar;
		hareketler[hhsayisi]=ymiktar;
		hhsayisi++;
	}

};
	


int main(){

 int musterisayisi;
 cout<<"kac musteri girilecek::";
 cin>>musterisayisi;
 //struct bankahesabi musteriler[musterisayisi];
musteriler=(struct bankahesabi*)malloc(musterisayisi*sizeof(struct bankahesabi));
for(int i=0;i<musterisayisi;i++){
	cout<<i+1<<".Musteri kayidi::"<<endl;
	cout<<"Hesap numarasi::";
	cin>>musteriler[i].hesapno;
	cout<<"Hesap sahibinin adi::";
	string isim;
	cin>>isim;
	musteriler[i].hesapsahibi=isim;
	cout<<"Hesap tipini belirleyiniz\"Vadeli icin(1)_Vadesiz icin(0) tuslayiniz::";	
	int tip;
	cin>>tip;
	musteriler[i].hesaptipi=tip;

}
bool kontrol=false;
int secim;
int islemsecim;
int numarakontrol;
do{
cout<<"islem yapmak istiyorsaniz (1)_istemiyorsaniz(0) tuslayiniz::";
cin>>secim;
if(secim==1){
cout<<"islem yapmak istediginiz hesap numarasini giriniz::";
cin>>numarakontrol;
for(int i=0;i<musterisayisi;i++){
	if(musteriler[i].hesapno==numarakontrol){
		cout<<"Yapmak istediginiz islemi seciniz::"<<endl<<"Para yatirmak icin=>(1)\nPara cekmek icin=>(2)\nHesap bilgilerini/Hareketlerini goruntulemek icin=>(3)\nTuslayiniz:";
		cin>>islemsecim;
		if(islemsecim==1){
			int yatirilan;
			cout<<"Yatirmak istediginiz miktari giriniz::";
			cin>> yatirilan;
			musteriler[i].parayatir(yatirilan);
			cout<<"$$Islem basarili$$"<<endl;
		}
		else if(islemsecim==2){
			cout<<"Cekmek istedigiiz miktari giriniz::";
			int cekilen;
			cin>>cekilen;
			musteriler[i].paracek(cekilen);
			cout<<"__Tesekkurler__"<<endl;
		}
		else if(islemsecim==3){
			cout<<"Hesap sahibi:"<<musteriler[i].hesapsahibi<<endl<<"Hesap numarasi:"<<musteriler[i].hesapno<<endl;
			if(musteriler[i].hesaptipi==1){
				cout<<"Hesap tipi::Vadeli"<<endl;
				
			}
			else{
				cout<<"Hesap tipi::Vadesiz"<<endl;
			}
			cout<<"Guncel Hesap bakiyesi::"<<musteriler[i].bakiye<<endl;
			cout<<"-------------------Hesap hareketleri--------------"<<endl<<	"Hareket sayisi:"<<musteriler[i].hhsayisi<<endl;
			if(musteriler[i].hhsayisi!=0){
			for(int a=0;a<musteriler[i].hhsayisi;a++){
				cout<<musteriler[i].hareketler[a]<<endl;
			}
			}
			
		}
		kontrol=true;
	}

}
if(kontrol==false){
	cout<<"!!!!Hesap bulunamadi!!!!"<<endl;
}
}

}while(secim!=0);

cout<<"_______IYI GUNLER______"<<endl;
 
 
 
 
return 0;
}

