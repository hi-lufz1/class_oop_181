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
	void input() {
		cout << "\n Masukan jumlah sks =";
		cin >> sks;

	}
};