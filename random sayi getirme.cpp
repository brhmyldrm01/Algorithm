#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	
int x,sayac,rnd,toplam;
for(int i=1;i<10;i++){

srand (time(NULL));
rnd=rand()-24;
if(rnd>50)
sayac++;
else
toplam++;
}
cout<<"50 den buyuk random sayisi=>>"<<sayac<<endl;
cout<<"50 den kucuk random sayisi=>>"<<toplam<<endl;
return 0;


}






