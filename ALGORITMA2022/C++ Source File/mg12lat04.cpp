#include <iostream>
using namespace std;

void garis (){
	cout<<"-------------"<<endl;
}

void namaku (string nama, int umur){
	cout<<"Nama saya: "<<nama<<endl;
	cout<<"Umur "<<umur<<endl;
}

int main(){
	string kata;
	kata = "Uvers Keren";
	
	garis(); namaku(kata, 20.00); garis();
	
}
