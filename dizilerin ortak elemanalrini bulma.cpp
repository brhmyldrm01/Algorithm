#include <iostream>
using namespace std;
int main(){
	
	int dizi[15]={1,3,34,33,12,545,6567,9878,675,44,7,2,6,7,5};
	int dizii[5]={11,545,4,7,2};
	int a=0,diziii[10];
	
	for(int i=0;i<15;i++){
		for(int j=0;j<5;j++){
			if(dizi[i]==dizii[j]){
			diziii[a]=dizii[j]	;
			a++;
				
			}
		}
	}
	
	for(int i=0;i<a;i++){
		cout<<diziii[i]<<endl;
		
	}
	return 0;
	
	
}
