#include<iostream>
using namespace std;
int main(){int a;int dizi[5];
	for(int i=0;i<5;i++) {
	cin>>a;
	dizi[i]=a;
	
}
for(int i=0;i<5;i++){
	for(int j=0;j<4;j++){
	if(dizi[j]<=dizi[j+1]){
	int temp=dizi[j];
	dizi[j]=dizi[j+1];
	dizi[j+1]=temp;
}
}
}
cout<<"sayilarin siralamasi"<<endl;
for(int i=0;i<5;i++){
	cout<<dizi[i]<<endl;
}
}
