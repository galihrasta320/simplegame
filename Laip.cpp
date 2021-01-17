#include <iostream>
#include <windows.h>

using namespace std;

class SoalMaker {
	public:
		int level;
		int nomorSoal;
		string soal;
		string a, b, c, d;
		string trueA;
		string pilihan;
		int totalBenar = 0;
		string jenisLevel;
	
	void Galih() {
		if (level == 1) {
			jenisLevel = "Mudah";
		} else if (level == 2) {
			jenisLevel = "Medium";
		} else if (level == 3) {
			jenisLevel = "Susah";
		} else {
			jenisLevel = "undefined";
		}
		
		if (nomorSoal == 5) {
			system("cls");
			cout << "----------------------" << endl;
			cout << "Game Selesai!" << endl;
			cout << "Skormu: ";
			cout << totalBenar << endl;
			cout << "Level: ";
			cout << jenisLevel << endl;
			cout << "----------------------" << endl;
		} else {
			system("cls");
			cout << nomorSoal;
			cout << ". " + soal << endl;
			cout << "----------------------" << endl;
			cout << "a. " + a << endl;
			cout << "b. " + b << endl;
			cout << "c. " + c << endl;
			cout << "d. " + d << endl;
			cout << "Masukkan Pilihan: ";
			cin >> pilihan;
		
			if (trueA == pilihan) {
				totalBenar++;
				MessageBox(NULL, "Jawabanmu bener ngab, lanjut yak?", "Jawaban benar", 4);
			} else {
				if (totalBenar == 0) {
					totalBenar = 0;
				} else {
					totalBenar--;
				}
			
				MessageBox(NULL, "Jawaban mu salah ngab, ulangin!", "Jan ngasal dong", 0);
				return Galih();
			}
		}
	}
};

int main() {
	/* Inisialisasi */
	string nama;
	int level;
	
	/* Nama */
	cout << "Nama mu ngab: ";
	cin >> nama;
	system("cls");
	
	/* Game RUN */
	cout << "---------------------" << endl;
	cout << "Tebak Tebakkan Game" << endl;
	cout << "Selamat Datang " + nama << endl;
	cout << "---------------------" << endl;
	cout << "Level:" << endl;
	cout << "[1] Mudah" << endl;
	cout << "[2] Medium" << endl;
	cout << "[3] Susah" << endl;
	cout << "Masukkan Level (Menggunakan Angka): ";
	cin >> level;
	system("cls");
	
	SoalMaker sm;
	sm.level = level;
	
	/* Levelling */
	switch (level) {
		case 1:
			/* level Mudah ini ngabb */
			/* Nomor 1 */
			sm.nomorSoal = 1;
			sm.soal = "Namaku adalah";
			sm.a = "Galih";
			sm.b = "Bijionta";
			sm.c = "kuda arab";
			sm.d = "Kadal gurun";
			sm.trueA = "a";
			sm.Galih();
			
			/* Nomor 2 */
			sm.nomorSoal = 2;
			sm.soal = "Presiden RI sekarang?";
			sm.a = "Galih";
			sm.b = "Jokowi";
			sm.c = "Fazlur";
			sm.d = "Asit";
			sm.trueA = "b";
			sm.Galih();
			
			/* Nomor 3 */
			sm.nomorSoal = 3;
			sm.soal = "Namaku adalah";
			sm.a = "Galih";
			sm.b = "Bijionta";
			sm.c = "kuda arab";
			sm.d = "Kadal gurun";
			sm.trueA = "a";
			sm.Galih();
			
			/* Nomor 4 */
			sm.nomorSoal = 4;
			sm.soal = "Presiden RI sekarang?";
			sm.a = "Galih";
			sm.b = "Jokowi";
			sm.c = "Fazlur";
			sm.d = "Asit";
			sm.trueA = "b";
			sm.Galih();
			
			/* Nomor 5 */
			sm.nomorSoal = 5;
			sm.soal = "Namaku adalah";
			sm.a = "Galih";
			sm.b = "Bijionta";
			sm.c = "kuda arab";
			sm.d = "Kadal gurun";
			sm.trueA = "a";
			sm.Galih();
			break;
			
			
		case 2:
			/* Level Medium ini ngabb */
			/* Nomor 1 */
			sm.nomorSoal = 1;
			sm.soal = "Namaku adalah";
			sm.a = "Galih";
			sm.b = "Bijionta";
			sm.c = "kuda arab";
			sm.d = "Kadal gurun";
			sm.trueA = "a";
			sm.Galih();
			
			/* Nomor 2 */
			sm.nomorSoal = 2;
			sm.soal = "Presiden RI sekarang?";
			sm.a = "Galih";
			sm.b = "Jokowi";
			sm.c = "Fazlur";
			sm.d = "Asit";
			sm.trueA = "b";
			sm.Galih();
			
			/* Nomor 3 */
			sm.nomorSoal = 3;
			sm.soal = "Namaku adalah";
			sm.a = "Galih";
			sm.b = "Bijionta";
			sm.c = "kuda arab";
			sm.d = "Kadal gurun";
			sm.trueA = "a";
			sm.Galih();
			
			/* Nomor 4 */
			sm.nomorSoal = 4;
			sm.soal = "Presiden RI sekarang?";
			sm.a = "Galih";
			sm.b = "Jokowi";
			sm.c = "Fazlur";
			sm.d = "Asit";
			sm.trueA = "b";
			sm.Galih();
			
			/* Nomor 5 */
			sm.nomorSoal = 5;
			sm.soal = "Namaku adalah";
			sm.a = "Galih";
			sm.b = "Bijionta";
			sm.c = "kuda arab";
			sm.d = "Kadal gurun";
			sm.trueA = "a";
			sm.Galih();
			break;
			
			
		case 3:
			/* Nomor 1 */
			sm.nomorSoal = 1;
			sm.soal = "Namaku adalah";
			sm.a = "Galih";
			sm.b = "Bijionta";
			sm.c = "kuda arab";
			sm.d = "Kadal gurun";
			sm.trueA = "a";
			sm.Galih();
			
			/* Nomor 2 */
			sm.nomorSoal = 2;
			sm.soal = "Presiden RI sekarang?";
			sm.a = "Galih";
			sm.b = "Jokowi";
			sm.c = "Fazlur";
			sm.d = "Asit";
			sm.trueA = "b";
			sm.Galih();
			
			/* Nomor 3 */
			sm.nomorSoal = 3;
			sm.soal = "Namaku adalah";
			sm.a = "Galih";
			sm.b = "Bijionta";
			sm.c = "kuda arab";
			sm.d = "Kadal gurun";
			sm.trueA = "a";
			sm.Galih();
			
			/* Nomor 4 */
			sm.nomorSoal = 4;
			sm.soal = "Presiden RI sekarang?";
			sm.a = "Galih";
			sm.b = "Jokowi";
			sm.c = "Fazlur";
			sm.d = "Asit";
			sm.trueA = "b";
			sm.Galih();
			
			/* Nomor 5 */
			sm.nomorSoal = 5;
			sm.soal = "Namaku adalah";
			sm.a = "Galih";
			sm.b = "Bijionta";
			sm.c = "kuda arab";
			sm.d = "Kadal gurun";
			sm.trueA = "a";
			sm.Galih();
			break;
			
			default:
				MessageBox(NULL, "Level belum ada ngab!", "Ulanginnn", 0);
				return main();
		}
}
