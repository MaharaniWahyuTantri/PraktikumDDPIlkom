#include <iostream>

using namespace std;

int main (){
	//deklarasikan angka yang diinput dengan variabel input dan deklarasi integer
	int input;
	cin >> input;
	
	//jika input adalah 1 maka output adalah SATU
	if (input == 1){
		cout << "SATU" << endl;	
		
	//jika input adalah 2 maka output adalah DUA
	}else if (input == 2){
		cout << "DUA" << endl;
		
	//jika input adalah 3 maka output adalah TIGA
	}else if (input == 3){
		cout << "TIGA" << endl;
		
	//jika input adalah lebih dari 3 maka output adalah lebhih dari tiga
	}else if (input > 3){
		cout << "lebih dari tiga";
		
	//jika tidak semua maka output adalah tidak valid
	}else  {
		cout << "tidak valid";	
	}
	
	return 0;
}
