include <iostream>

using namespace std;

int main (){
	//deklarasikan variabel tahun dengan integer karena berupa angka
	int tahun;
	
	//output agar user mengetahui bahwa mereka harus menginput tahun
	cout << "Masukkan tahun \t : ";
	cin >> tahun;
	
	//operasi jika tahun input habis dibagi 400 maka merupakan tahun kabisat
	if (tahun%400==0) {
		cout << "Tahun " << tahun << " adalah tahun Kabisat";
	//operasi jika tahun tidak habis dibagi 400 maka habis dibagi 100 maka bukan tahun kabisat
	}else if (tahun%100==0) {
		cout << "Tahun " << tahun << "bukan tahun Kabisat";
	//operasi jika tahun habis dibagi 4 maka merupakan tahun kabisat
	}else if (tahun%4==0){
		cout << "Tahun " << tahun << " adalah tahun kabisat ";
	//operasi jika tahun tidak habis dibagi 400, 100, dan 4 maka bukan tahun kabisat
 	}else {
 		cout << "Tahun " << tahun << "bukan tahun Kabisat";
 }
	
	
}
