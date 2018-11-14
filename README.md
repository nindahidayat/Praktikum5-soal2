 # Praktikum5-soal2
## Cara menyusun  algoritma untuk menyusun "tiga buah bilangan". cetak dengan perkataan "BENAR" bila salah satu bilanngan merupakan jumlah dari dua buah bilangan yang lain. selainnya ( bila tidak) cetak dengan perkataan "SALAH"..

#include <iostream>

using namespace std;


int main()
{
	int a,b,c;

	cout<<"masukan nilai ke 1 :";
	cin>>a;
	cout<<"masukan nilai ke 2 :";
	cin>>b;
	cout<<"masukan nilai ke 3 :";
	cin>>c;

	if( (a+b==c) || (a+c==b) )
	{
		cout<<"BENAR";
	}
	else if((b+c==a))
	{
		cout<<"BENAR";
	}
	else
	    {
	    cout<<"SALAH";
	    }

	return 0;
}

#Penjelasnya
  algoritma ini untuk menginput tiga buah bilangan dengan mencari perakataan BENAR atau SALAH..
  misalkan contoh 20,15,5 maka hasil nya BENAR, kenapa benar karena terdapat angka 20, 15+5=20.
  contoh lain 15,8,4 maka bisa dikatakan SALAH, karena bila bilangan tersebut di tambah antara dua bilang tersebut maka dari tiga bilangan tersebut tidak terdapat hasilnya.
