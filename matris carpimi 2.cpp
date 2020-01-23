#include <iostream>
using namespace std;
int main(){
	
	
	int matris[3][3];
	int a;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<i+1<<". satir "<<j+1<<".sutun degerini giriniz==>";
			cin>>a;
			matris[i][j]=a;
		}

	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matris[i][j]<<"\t";
		}
	cout<<endl<<endl;
	}
	int carpim[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			carpim[i][j]=0;
		}
	}
	for(int a=0;a<3;a++){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				carpim[i][j]+=matris[i][a]*matris[a][j];
			}
		}
	}
	cout<<"carpim!!!!!!!!!!!!!!\n";
	for(int a=0;a<3;a++){
		for(int b=0;b<3;b++){
			cout<<carpim[a][b]<<"\t";
		}
	cout<<endl<<endl;
	}
	
	
	system("pause");
	return 0;
}
