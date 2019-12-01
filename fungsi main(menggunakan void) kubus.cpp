#include <iostream>
#include <cmath>

using namespace std;

void VolumeKubus(){
	
	int sisi;
	
	cout<<"masukkan sisi = ";
	cin>>sisi;
	
	cout<<"volume kubus adalah = "<<pow(sisi,3)<<"cm3"<<endl;
}
int main(){
	
	VolumeKubus();
	return 0;
}
