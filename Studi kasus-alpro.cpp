#include<iostream>
using namespace std;

int main (){
 	int kode,harga,jumlah,total,bayar,kembali;
 	char mad;
 	do 
{
 	cout<<"============================"<<endl;
 	cout<<"Menu Makanan Kafe SerbaBebas"<<endl;
 	cout<<"============================"<<endl;
 	cout<<""<<endl;
 	cout<<"Menu Makanan Harga"<<endl;
 	cout<<"1. Ayam Geprek Rp. 16.000"<<endl;
 	cout<<"2. Ayam Goreng Rp. 12.000"<<endl;
 	cout<<"3. Ayam Bakar Rp. 8.000"<<endl;
	cout<<"4. Udang Goreng Rp. 10.000"<<endl;
 	cout<<"5. Cumi Goreng Rp. 8.000"<<endl;
 	
 	cout<<"============================"<<endl;
 
 	cout<<'\n'<<"Masukan No Menu Pilihan : ";
 	cin>>kode;
 	switch (kode){
 		case 1:
  			cout<<'\n'<<"Soto Ayam"<<endl;
  			harga=16000;
  			cout<<"Masukan Jumlah Pesanan : ";
  			cin>>jumlah;
   			total=harga*jumlah;
  			cout<<"Total Harga  : Rp. "<<total<<endl;
  			cout<<"Uang yang Dibayar : Rp. ";
  			cin>>bayar;
   			kembali=bayar-total;
  			cout<<"Kembali   : Rp. "<<kembali<<endl;
  			cout<<"Masih ada Y/T  : ";
  			cin>>mad;
  	break;
 	case 2:
  		cout<<'\n'<<"Nasi Uduk"<<endl;
   		harga=12000;
  		cout<<"Masukan Jumlah Pesanan : ";
  		cin>>jumlah;
   		total=harga*jumlah;
  		cout<<"Total Harga  : Rp. "<<total<<endl;
  		cout<<"Uang yang Dibayar : Rp. ";
  		cin>>bayar;
   		kembali=bayar-total;
  		cout<<"Kembali   : Rp. "<<kembali<<endl;
  		cout<<"Masih ada Y/T  : ";
  		cin>>mad;
  	break;
 	case 3:
  		cout<<'\n'<<"Mie Ayam"<<endl;
   		harga=15000;
  		cout<<"Masukan Jumlah Pesanan : ";
  		cin>>jumlah;
   		total=harga*jumlah;
  		cout<<"Total Harga  : Rp. "<<total<<endl;
  		cout<<"Uang yang Dibayar : Rp. ";
  		cin>>bayar;
   		kembali=bayar-total;
  		cout<<"Kembali   : Rp. "<<kembali<<endl;
  		cout<<"Masih ada Y/T  : ";
  		cin>>mad;
  	break;
 	case 4:
  		cout<<'\n'<<"Nasi Goreng"<<endl;
   		harga=8000;
  		cout<<"Masukan Jumlah Pesanan : ";
  		cin>>jumlah;
   		total=harga*jumlah;
  		cout<<"Total Harga  : Rp. "<<total<<endl;
  		cout<<"Uang yang Dibayar : Rp. ";
  		cin>>bayar;
   		kembali=bayar-total;
  		cout<<"Kembali   : Rp. "<<kembali<<endl;
  		cout<<"Masih ada Y/T  : ";
  		cin>>mad;
  	break;
 	default:
 		cout<<"Kode yang anda masukkan tidak ada";
}
} 
 	while (mad/='Y');
	cout<<"Terimah Kasih Atas Kunjungan Anda"<<endl;
	
	int main() {
	int jenis, lama, harga, tambahan, jam_berikutnya;
	
	cout<<"PROGRAM C++ TARIF PARKIR KENDARAAN"<<endl;
	cout<<"1. Mobil"<<endl;
	cout<<"2. Motor"<<endl;
	cout<<endl;
	cout<<"Masukan Jenis Kendaraan       : ";
	cin>>jenis;
	//Pemilihan dengan switch case
	switch (jenis){
		case 1  : 
			harga=3000;
			tambahan=1000;
			break;
		case 2  :
			harga=2000;
			tambahan=500;
			break;
		default :
			harga=0;		
	}

	cout<<"Masukan Lama Parkir (Per Jam) : ";
	cin>>lama;
	//Kondisi percabangan
	if (lama>2){
		jam_berikutnya=((lama-2)*tambahan);
	}else {
		jam_berikutnya=0;
	}
	//Menampilkan Hasil
	cout<<"------------------------------------"<<endl;
	cout<<"2 Jam Pertama  Rp:"<<harga<<endl;
	cout<<"Jam Berikutnya Rp:"<<jam_berikutnya<<endl;
	cout<<"Total Bayar    Rp:"<<harga+jam_berikutnya<<endl;
 	return 0;
}
