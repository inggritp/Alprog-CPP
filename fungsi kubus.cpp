#include <iostream>
#include <cmath>

using namespace std;

int hitung_volume_kubus(int sisi){
	return pow(sisi,3);
}
	int main(){
		int sisi,volume;
		
		cout<<"masukkan sisi =";
		cin>>sisi;
		
		volume= hitung_volume_kubus(sisi);
		cout<<"volume kubus adalah= "<<volume<<"cm3";
	}
