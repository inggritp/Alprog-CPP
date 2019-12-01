#include <iostream>


using namespace std;

void VolumeBalok(){
	
	int panjang,lebar,tinggi;
	
	cout<<"masukkan Panjang = ";
	cin>>panjang;
	cout<<"masukkan Lebar = ";
	cin>>lebar;
	cout<<"masukkan tinggi = ";
	cin>>tinggi;
	cout<<"volume balok adalah = "<<panjang*lebar*tinggi<<"cm3"<<endl;
}
int main(){
	
	VolumeBalok();
	return 0;
}
