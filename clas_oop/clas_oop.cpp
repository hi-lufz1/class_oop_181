#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tanpil() {
		cout << "Nim = " << nim;
		cout << "\n Nama =" << nama;

	}
};

class matakuliah {
private:
	int sks;
	string kode;
	string namaMk;
public:
	void inputmk() {
		cout << "\n Masukan jumlah sks =";
		cin >> sks;
		cout << "\n Masukan kode mk =";
		cin >> kode;
		cout << "\n Masukan nama mk =";
		cin >> namaMk;

	}
	void tampilmk(){
		cout << "\n Jumlah sks =" << sks;
		cout << "\n kode Mk = " << kode;
		cout << "\n nama mk =" << namaMk << endl;
	}
};
