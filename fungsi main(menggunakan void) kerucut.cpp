#include <iostream>
#include <cmath>

using namespace std;

void VolumeKerucut(){
	
	float jari_jari,tinggi;
	const float  phi = 3.14;
	
	cout<<"masukkan jari-jari = ";
	cout<<"masukkan tinggi = ";
	cin>>tinggi;
	cout<<"volume balok adalah = "<<0.33*phi*pow(jari_jari,2)*tinggi<<"cm3"<<endl;
}
int main(){
	
	VolumeKerucut();
	return 0;
}
