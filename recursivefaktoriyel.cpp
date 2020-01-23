#include<iostream>
using namespace std;
int fak(int a);
int toplam(int a);
int main(){
	

int a;

cin>>a;
cout<<fak(a)<<endl;
cout<<toplam(a);



}

int fak(int a){
int toplam=0;
if(a!=1)
return a*fak(a-1);
else
return 1;}

int toplam(int a){
	if(a!=0)
	return a+toplam(a-1);
	else
	return 1;
}
		


