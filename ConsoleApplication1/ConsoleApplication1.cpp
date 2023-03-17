#include <iostream>
using namespace std;

//prototype fungsi
void cetakElemenArray(int array[], int jumlahElemenArray);
int getNilaiTerbesar(int array[], int jumlahElemenArray);
int getNilaiTerkecil(int array[], int jumlahElemenArray);
int getNilaiRata(int jumlahNilai, int jumlahElemenArray);

int main()
{

	//deklarasi array plus inisialisasi
	int nilaiArray[100];

	//inisialisasi jumlah element array
	int jumlahElemenArray;

	//inisialisasi nilai terbesar, nilai terkecil, dan nilai Rata-rata 
	int nilaiTerbesar;

	int nilaiTerkecil;

	int jumlahNilai=0;

	float nilaiRata;


	cout << "Inputkan jumlah array :";
	cin >> jumlahElemenArray;

	//memasukan nilai array
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		cout << "Masukan nilai array ke -" << i + 1 << " :";
		cin >> nilaiArray[i];
		jumlahNilai += nilaiArray[i];
	}

	//cari nilai terbesar dan terkecil
	nilaiTerbesar = getNilaiTerbesar(nilaiArray, jumlahElemenArray);

	nilaiTerkecil = getNilaiTerkecil(nilaiArray, jumlahElemenArray);

	nilaiRata = getNilaiRata(jumlahNilai, jumlahElemenArray);


	cout << "Nilai array berikut :" << endl << endl;

	//cetak elemen array
	cetakElemenArray(nilaiArray, jumlahElemenArray);

	cout << "Nilai terbesar nya Adalah: " << nilaiTerkecil << endl << endl;

	cout << "Nilai terbesar nya Adalah: " << nilaiTerbesar << endl << endl;

	cout << "Nilai rata-rata nya Adalah: " << nilaiRata << endl << endl;

	system("pause");
	return 0;
}

void cetakElemenArray(int array[], int jumlahElemenArray)
{
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl << endl;
}

int getNilaiTerbesar(int array[], int jumlahElemenArray)
{
	int nilaiTerbesar = 0;
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		if (nilaiTerbesar < array[i]) {
			nilaiTerbesar = array[i];
		};
	}

	return nilaiTerbesar;
}

int getNilaiTerkecil(int array[], int jumlahElemenArray)
{
	int nilaiTerkecil;
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		if (i == 0)
			nilaiTerkecil = array[i];
		else if (nilaiTerkecil > array[i])
			nilaiTerkecil = array[i];

	}
	return nilaiTerkecil;
}

int getNilaiRata(int jumlahNilai, int jumlahElemenArray)
{
	int nilaiRata = jumlahNilai / jumlahElemenArray;
	return nilaiRata;
}