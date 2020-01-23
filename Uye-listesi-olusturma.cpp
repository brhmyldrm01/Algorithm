#include <iostream>
using namespace std;
struct Uyelistesi{
	string Uyeismi;
	string Uyesoyismi;
	int Uyeno;
	string Uyeemail; 
	
	
};
int main(){
	setlocale(LC_ALL,"Turkish");
	char onay;
	int Uyesayisi=0;
	cout<<"Kac uye eklenecek::";
	cin>>Uyesayisi;
	struct Uyelistesi Uyeler[Uyesayisi];
	for(int i=0;i<Uyesayisi;i++){
		bool kontrol=true;
		cout<<i+1<<". Uyenin ismi::";
		cin>>Uyeler[i].Uyeismi;
		cout<<i+1<<". Uyenin soyismi::";
		cin>>Uyeler[i].Uyesoyismi;
		cout<<i+1<<". Uyenin Numarasi::";
		cin>>Uyeler[i].Uyeno;
		cout<<i+1<<". Uyenin Email'i::";
		cin>>Uyeler[i].Uyeemail;
	
		while(kontrol==true){
		cout<<"Girdiginiz Bilgileri Kontrol Ediniz Onayliyorsaniz \"e\"\n Onaylamiyorsaniz\"h\"\n Tuslayiniz::";
		cin>>onay;	
	
		if(onay=='e'||onay=='E'){
			kontrol=false;
		}
			
		else if(onay=='h'||onay=='H'){
			i--;
			kontrol=false;
		}	
		else{
			cout<<"Yanlis tuslama yapildi!!"<<endl;
		}
		
		}
		
		}	
		string izin;
		cout<<"Uye listesini gormek icin \"Tamam\" yaziniz"<<endl;
		cin>>izin;
		
		if(izin=="tamam"||izin=="Tamam"||izin=="TAMAM"){
	
		for(int i=0;i<Uyesayisi;i++){
		cout<<i+1<<"._Uyenin Bilgileri_"<<endl;
		cout<<"ISIM:"<<Uyeler[i].Uyeismi<<endl;	
		cout<<"SOYISIM:"<<Uyeler[i].Uyesoyismi<<endl;
		cout<<"NUMARA:"<<Uyeler[i].Uyeno<<endl;
		cout<<"EMAIL:"<<Uyeler[i].Uyeemail<<endl;	
		
		}
		
		
	}
	
	
	
	system("pause");
	return 0;
}
	
	
	

