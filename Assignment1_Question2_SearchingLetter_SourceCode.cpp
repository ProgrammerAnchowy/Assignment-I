/****************************************************************************
**					          SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				          B�LG�SAYAR M�HEND�SL��� B�L�M�
**				            PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�...:�dev1 & Soru2
**				��RENC� ADI......:Davud Samed Tombul
**				��RENC� NUMARASI.:B171210007
**				DERS GRUBU����...:1D
****************************************************************************/

#include<iostream>//Temel komutlar� kullanmam�z i�in gerekli k�t�phane
#include<locale.h>//Farkl� karakter kullan�m� i�in gerekli k�t�phane
#include<conio.h>//_getche komutu i�in gerekli
#include<iomanip>//Setw manip�lat�r�n�n kullan�lmas� i�in gerekli
using namespace std;

int main()
{
	//T�rk�e karakter kullanabilmemizi sa�l�yor..
	setlocale(LC_ALL, "Turkish");


	int tekrara = 0, tekrare = 0, tekrar� = 0, tekrari = 0, tekraro = 0, tekrar� = 0, tekraru = 0, tekrar� = 0;

	char ch;

	cout << "Bir C�mle Giriniz : ";

	//Enter tu�una bas�lana kadar girilen karakterler okunuyor.
	while ((ch = _getche()) != '\r')

	{
		if (ch == 'a' || ch == 'A')
			tekrara++;
		if (ch == 'e' || ch == 'E')
			tekrare++;
		if (ch == char(-115) || ch == 'I')
			tekrar�++;
		if (ch == 'i' || ch == char(152))
			tekrari++;
		if (ch == 'o' || ch == 'O')
			tekraro++;
		if (ch == char(148) || ch == char(153))
			tekrar�++;
		if (ch == 'u' || ch == 'U')
			tekraru++;
		if (ch == char(129) || ch == char(154))
			tekrar�++;
	}

	cout << "\n";
	//En �ok bas�lan sesli harf tesbit ediliyor
	int gecici = tekrara;

	if (gecici < tekrare)
		gecici = tekrare;
	else if (gecici < tekrar�)
		gecici = tekrar�;
	else if (gecici < tekrari)
		gecici = tekrari;
	else if (gecici < tekraro)
		gecici = tekraro;
	else if (gecici < tekrar�)
		gecici = tekrar�;
	else if (gecici < tekraru)
		gecici = tekraru;
	else if (gecici < tekrar�)
		gecici = tekrar�;

	cout << 'H' << setw(5) << "TS";
	//En �ok bas�lan karakterin say�s�nca rakamlar 1 den itibaren tabloya yaz�l�r.
	for (int k = 1; k <= gecici; k++)
		cout << setw(5) << k;

	cout << "\n";
	//Harfler ve bas�m say�lar� tabloya aktar�l�yor.

	cout << 'a' << setw(5) << tekrara;
	for (int t = 1; t <= tekrara; t++)
		cout << setw(5) << 'a';
	cout << "\n";

	cout << 'e' << setw(5) << tekrare;
	for (int t = 1; t <= tekrare; t++)
		cout << setw(5) << 'e';
	cout << "\n";

	cout << '�' << setw(5) << tekrar�;
	for (int t = 1; t <= tekrar�; t++)
		cout << setw(5) << '�';
	cout << "\n";

	cout << 'i' << setw(5) << tekrari;
	for (int t = 1; t <= tekrari; t++)
		cout << setw(5) << 'i';
	cout << "\n";

	cout << 'o' << setw(5) << tekraro;
	for (int t = 1; t <= tekraro; t++)
		cout << setw(5) << 'o';
	cout << "\n";

	cout << '�' << setw(5) << tekrar�;
	for (int t = 1; t <= tekrar�; t++)
		cout << setw(5) << '�';
	cout << "\n";

	cout << 'u' << setw(5) << tekraru;
	for (int t = 1; t <= tekraru; t++)
		cout << setw(5) << 'u';
	cout << "\n";

	cout << '�' << setw(5) << tekrar�;

	for (int t = 1; t <= tekrar�; t++)
		cout << setw(5) << '�';
	cout << "\n";


	system("pause");
	return 0;
}