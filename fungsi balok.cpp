#include <iostream>

using namespace std;

int hitung_volume_balok(int panjang,int lebar, int tinggi){
	return panjang*lebar*tinggi;
}
	int main(){
		int panjang,lebar,tinggi,volume;
		
		cout<<"masukkan panjang =";
		cin>>panjang;
		cout<<"\nmasukkan lebar =";
		cin>>lebar;
		cout<<"\nmasukkan tinggi =";
		cin>>tinggi;
		
		volume= hitung_volume_balok(panjang,lebar,tinggi);
		cout<<"volume balok adalah= "<<volume<<"cm3";
	}
