#include<iostream>
using namespace std;
int test(int ustkenar,int solkenar,int sagkenar,int altkenar ){
	if(ustkenar<=solkenar&&ustkenar<=sagkenar&&ustkenar<=altkenar)
	return ustkenar;
	if(solkenar<=ustkenar&&solkenar<=sagkenar&&solkenar<=altkenar)
	return solkenar;
	if(sagkenar<=solkenar&&sagkenar<=ustkenar&&sagkenar<=altkenar)
	return sagkenar;
	if(altkenar<=solkenar&&altkenar<=sagkenar&&altkenar<=ustkenar)
	return altkenar;
}
int main(){
	int Satir,Sutun;
	cout<<"Matris Satir Sayisi::";
	cin>>Satir;
	cout<<"Matris Sutun Sayisi::";
	cin>>Sutun;
	
	for(int i=1;i<=Satir;i++){
		for(int j=1;j<=Sutun;j++){
			int sag =Satir-i+1;
			int alt=Sutun-j+1;
			cout<<test(i,j,sag,alt);
		}
		cout<<endl;
	}
}
