#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	string nama;

public:
	friend void setNama(Mahasiswa& a, string);
};

void setNama(Mahasiswa& a, string pNama) {
	a.nama = pNama;
}

