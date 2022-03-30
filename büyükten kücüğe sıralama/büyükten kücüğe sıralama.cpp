#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int sayi1, sayi2, sayi3;

	setlocale(LC_ALL, "Turkish");
	cout << "1. sayıyı giriniz: ";
	cin >> sayi1;
	cout << "2.sayıyı giriniz: ";
	cin >> sayi2;
	cout << "3. sayıyı giriniz: ";
	cin >> sayi3;
	if (sayi1 > sayi2 && sayi1 > sayi3)
	{
		cout << "en büyük sayı " << sayi1 << endl;

	}
	else if (sayi2 > sayi1 && sayi2 > sayi3)
	{
		cout << "en büyük sayı" << sayi2 << endl;
	}
	else if (sayi3 > sayi1 && sayi3 > sayi2)
	{
		cout << "en büyük sayı " << sayi3 << endl;
	}
	else if (sayi1 == sayi2 == sayi3)
	{
		cout << "bütün sayılar birbirine eşittir";
	}
	else if (sayi1 == sayi2 && sayi1 != sayi3 && sayi2 != sayi3)
	{
		cout << "içlerinden herhangi ikisi birbirine eşittir";
	}
	else if (sayi1 == sayi3 && sayi3 != sayi2 && sayi1 != sayi2)
	{
		cout << "içlerinden herhangi ikisi birbirine eşittir";
	}
	else if (sayi2 == sayi3 && sayi2 != sayi1 && sayi3 != sayi1)
	{
		cout << "içlerinden herhangi ikisi birbirine eşittir";
	}



	return 0;
}