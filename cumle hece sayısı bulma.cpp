#include<iostream>
using namespace std;
int main(){
	char cumle[100];
	int i=-1;
	cout<<"Girdiginiz cumlenin hece sayisi bulunacak"<<endl;
	do{
	i++;
	cin>>cumle[i];
	}while(cumle[i]!='.');
	int hecesayisi=0;
	for(int a=0;a<i;a++){
		if(cumle[a]=='E'||cumle[a]=='a'||cumle[a]=='u'||cumle[a]=='i'||cumle[a]=='e'||cumle[a]=='o'||cumle[a]=='A'||cumle[a]=='O'
		||cumle[a]=='U'||cumle[a]=='I'){
		hecesayisi++;
		}
	}
	cout<<"Hece sayisi::"<<hecesayisi;
	
	
}
