#include<iostream>
using namespace std;
int main (){
int toplam=0,b=0,o=0,y=0;	
	for(int i=100;i<1000;i++){
	b=(i%10)*(i%10)*(i%10);
	o=((i/10)%10)*((i/10)%10)*((i/10)%10);
	y=(i/100)*(i/100)*(i/100);
	toplam=b+o+y;
	if(toplam==i)
    cout<<i<<endl;
}
}
