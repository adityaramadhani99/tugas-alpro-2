#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
main (void){
	int suhu, X;
	cout<<"Tentukan Batas Suhu antara suhu dingin dan panas : ";
	cin>>X;
	cout<<"Masukkan suhu : ";
	cin>>suhu;
	cout<<endl;
	
(suhu > X) ? cout<<"Suhu Panas" : cout<<"Suhu Dingin";
	getch();
	}

