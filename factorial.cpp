#include <iostream>
using namespace std;
int main(){
		setlocale(LC_ALL, "Turkish"); 

	int a;
    
	cout<<"faktöriyel ";
	cin >> a;

	int deger=1;

for(int i=a; i > 0; i--)
{
	deger = deger*i;
}

cout<< deger << endl;
return -1;
}
