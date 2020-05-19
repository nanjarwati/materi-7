#include<iostream>
using namespace std;
struct mahasiswa{
	string nama;
	int usia;
	float ipk;
	string hobi[2];
};
int main()
{
	mahasiswa mhs[2];
	
	mhs[0].nama="Andi";
	mhs[0].usia=21;
	mhs[0].ipk=3.5;
	mhs[0].hobi[0]="Renang";
	mhs[0].hobi[1]="Futsal";
	mhs[1].nama="Ririn";
	mhs[1].usia=19;
	mhs[1].ipk=3.7;
	mhs[1].hobi[0]="Voli";
	mhs[1].hobi[1]="Basket";
	
	cout<<mhs[0].nama<<endl;
	cout<<mhs[0].usia<<endl;
	cout<<mhs[0].ipk<<endl;
	cout<<mhs[0].hobi[0]<<endl;
	cout<<mhs[0].hobi[1]<<endl;
	cout<<mhs[1].nama<<endl;
	cout<<mhs[1].usia<<endl;
	cout<<mhs[1].ipk<<endl;
	cout<<mhs[1].hobi[0]<<endl;
	cout<<mhs[1].hobi[1]<<endl;
	
	
	
}
