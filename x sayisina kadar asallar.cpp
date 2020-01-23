#include<iostream>
using namespace std;
int main(){
		int  a,asal;

cout<<"hangi sayiya kadar asallik  hesaplanacak";
cin>>a;
	for(int b=2;b<a;b++){
asal=0;
for(int i=2;i<b;i++){
	if(b%i==0)
asal++;
}
if(asal==0)
cout<<b<<"asal"<<endl;



}

}
