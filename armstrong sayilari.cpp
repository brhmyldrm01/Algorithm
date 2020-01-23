#include <iostream>
using namespace std;
int armstrong(int a){int c=0,toplam=0;
	while(a>0){
	c=a%10;
	toplam+=(c*c*c);
	a/=10;
}
	return toplam;
}


int main(){int a;
	cin>>a;
	for(int i=0;i<=a;i++){
	if(armstrong(i)==i)
	cout<<i<<"armstrong sayisidir"<<endl;
}


}
