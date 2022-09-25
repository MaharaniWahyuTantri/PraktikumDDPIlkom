#include <iostream>

using namespace std;

int main(){
	/* 
	int nilai;
	cin>>nilai;
	if(nilai== 100){
		cout<<"nilai sempurna \n";
		}else if (nilai>80&&nilai<100){
			cout << "nilai di atas kkm \n";
		}else if (nilai<=75&&nilai>0){
			cout<<"nilai di bawah kkm\n";
		}else {
			cout << "tidak bole masukin nilai ini, you know!";
		}
	
	
	
	char huruf = 'J';
	cin >> huruf;
	switch (huruf){
		case 'J' :
			cout << "Ini adalah huruf J\n";
			break;
		case 'I' :
			cout << "Ini adalah huruf I\n";
			break;
		case 'E' :
			cout << "Ini adalah huruf E\n";
			break;
		default : 
			cout << "Huruf tidak terdaftar \n";
	}

	
	
	int umur;
	cin >> umur;
	cout << "Anda " << (umur>=17? "cukup " : "di bawah ") << "umur" << endl;
	
	cout << "Anda " << (umur<=12? "masih " : "bukan ") << "bayi";
	
	*/
	
	int bilangan;
	cin >> bilangan;
	if(bilangan>0){
		cout << "bilangan positif\n";
		if(bilangan%2==0){
			cout << "bilangan genap\n";
		}else if (bilangan%2==1){
			cout << "bilangan ganjil\n";
		}
	}else{
		cout << "bilangan negatif\n";
	}
}

