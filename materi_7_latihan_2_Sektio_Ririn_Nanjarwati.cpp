#include<iostream>
using namespace std;
struct kucing{
	string nama;
	string jeniskelamin;
	int umur;
	float berat;
	string warna[3];
};
int main()
{
	kucing kcg; 
	
	kcg.nama="lulu";
	kcg.jeniskelamin="betina";
	kcg.umur=6;
	kcg.berat=2.5;
	kcg.warna[0]="putih";
	kcg.warna[1]="hitam";
	kcg.warna[2]="orange";
	
	cout<<kcg.nama<<endl;
	cout<<kcg.jeniskelamin<<endl;
	cout<<kcg.umur<<endl;
	cout<<kcg.berat<<endl;
	cout<<kcg.warna[0]<<endl;
	cout<<kcg.warna[1]<<endl;
	cout<<kcg.warna[2]<<endl;
}
