#include<iostream>
using namespace std;
int main(){
	int Sayi;
	cout<<"Asal carpanlari bulunacak sayi::";
	cin>>Sayi;
	for(int i=2;Sayi>1;i++){
		while(Sayi%i==0){
			cout<<i<<endl;
			Sayi=Sayi/i;
		}
	}
{   

}
system("pause");
return 0;

	
	
	
}
