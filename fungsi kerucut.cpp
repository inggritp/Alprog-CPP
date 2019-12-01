#include <iostream>
#include <cmath>

using namespace std;

float  hitung_volume_kerucut(float jari_jari, float tinggi,const float phi = 3.14){
	return 0.33*phi*pow(jari_jari,2)*tinggi;
}
	int main(){
		float jari_jari,tinggi,volume;
		
		
		cout<<"masukkan jari-jari = ";
		cin>>jari_jari;
		cout<<"\nmasukkan tinggi = ";
		cin>>tinggi;
		
		volume= hitung_volume_kerucut(jari_jari,tinggi);
		cout<<"volume kerucut adalah = "<<volume<<"cm3";
	}
