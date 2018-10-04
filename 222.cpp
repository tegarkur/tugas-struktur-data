#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
	int i, n;
	float angka[100], total, totalpangkat, angkapangkat[i], x;
	
	cout << "Program Menghitung Standar Deviasi dari sejumlah angka yang dimasukkan"<<endl;
	cout << "berapa buah angka yang anda akan masukkan: ";cin>>n;
	for (i=0; i<n; i++)
	{
		cout << "Masukkan angka ke-" << i+1 << " : ";cin>>angka[i];
		total = total+angka[i];
		angkapangkat[i]=pow(angka[i],2);
		totalpangkat = totalpangkat+angkapangkat[i];
	}
	x = pow(total,2);
	cout << "standar deviasi dari angka yang dimasukkan adalah = " << sqrt((n*totalpangkat-x)/(n*(n-1)))<< endl;
	return 0;
}
