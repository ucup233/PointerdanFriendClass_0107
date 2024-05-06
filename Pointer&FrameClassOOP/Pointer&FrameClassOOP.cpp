#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main() {
	Mahasiswa mhs{ 1 }; //object mhs
	mhs.showNim(); //member access operator

	Mahasiswa &refMhs = mhs; //pointer reference refMhs
	refMhs.nim = 2; //member access operator
	mhs.showNim();

	Mahasiswa* pMhs = &mhs; //pointer dereference pMhs
	pMhs->nim = 3; //arrow operator
	mhs.showNim();
	return 0;
}