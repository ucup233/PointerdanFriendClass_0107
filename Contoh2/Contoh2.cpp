#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main(){
	Mahasiswa* mhs = new Mahasiswa{ 1 };
	mhs->nim = 2;
	mhs->showNim();
	delete mhs;
	return 0;
}