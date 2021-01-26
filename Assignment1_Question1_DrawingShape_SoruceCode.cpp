/****************************************************************************
**					         SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				        B�LG�SAYAR M�HEND�SL��� B�L�M�
**				          PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�...: �dev1 & Soru1
**				��RENC� ADI......: Davud Samed Tombul
**				��RENC� NUMARASI.: B171210007
**				DERS GRUBU����...: �rg�n E�itim D Grubu
****************************************************************************/

#include<iostream>//Cout gibi temel komutlar� kullanabilmemiz i�in k�t�phane ekliyor.
using namespace std;//Her cout yaz�l���m�zda �n�de std:: eklemeden rahat �ekilde yazmam�z� sa�l�yor.

int main()//Ana fonksiyon
{
	// �eklin �st par�as�ndaki 5 sat�r� olu�turuyor ve d�zenlenmesini sa�l�yor.
	for (int sat�rlarUst = 1; sat�rlarUst <= 5; sat�rlarUst++)
	{
		//�eklin �st k�sm�ndaki her sat�r�n soluna * sembolleri ekleniyor.
		for (int solYildizUst = sat�rlarUst; solYildizUst <= 5; solYildizUst++)
			cout << "* ";

		//�eklin �st k�sm�ndaki y�ld�zlar aras�na bo�luk ekleniyor.
		for (int boslukUst = 5 - 4 * sat�rlarUst + 1; boslukUst <= 5; boslukUst++)
			cout << " ";

		//�eklin �st k�sm�ndaki her sat�r�n sa��na * sembolleri ekleniyor.
		for (int sa�YildizUst = sat�rlarUst; sa�YildizUst <= 5; sa�YildizUst++)
			cout << "* ";

		// Her bir sat�rda gereken i�lemler yap�ld�ktan sonra bir alt sat�ra ge�i�i sa�l�yor.
		cout << endl;
	}
	//�eklin iki par�as� aras�ndaki bo�luk olu�turuluyor.
	cout << endl;

	//�eklin alt k�sm�ndaki sat�rlar� olu�turup d�zenlemek i�in d�ng� ekleniyor.
	for (int sat�rlarAlt = 1; sat�rlarAlt <= 5; sat�rlarAlt++)
	{
		//�eklin alt k�sm�ndaki her sat�r�n soluna * sembolleri ekleniyor.
		for (int solYildizAlt = 6 - sat�rlarAlt; solYildizAlt <= 5; solYildizAlt++)
			cout << "* ";

		//�eklin alt par�as�ndaki y�ld�zlar aras�na bo�luklar ekleniyor.
		for (int boslukAlt = 24 - 4 * sat�rlarAlt; boslukAlt > 0; boslukAlt--)
			cout << " ";

		//�eklin alt par�as�ndaki sat�rlar�n sa� k�sm�na belli d�zende y�ld�z ekliyor.
		for (int sa�YildizAlt = 6 - sat�rlarAlt; sa�YildizAlt <= 5; sa�YildizAlt++)
			cout << "* ";

		//Alt sat�ra ge�i�i sa�l�yor.
		cout << endl;
	}

	cout << endl;

	system("pause");
	//Program�n hatas�z sonland�r�ld���n� belirtiyor.
	return 0;
}
