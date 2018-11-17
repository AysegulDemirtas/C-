# include<iostream>
          # include<string>
          # include<fstream>

          using namespace std;
          void DosyadanOku();
          void DosyayaYaz();
          int main()
{
           char Sc = '1';
           cout << "Dosyaya Yazmak Icin 0 Dosyadan Okumak Icin 1 Giriniz" << endl;
           cin >> Sc;
           while (Sc != '2')
         {
            if (Sc == '0')
            {
             DosyayaYaz();
            }
            if (Sc == '1')
            {
             DosyadanOku();
            }
            cout << "Dosyaya Yazmak Icin 0 , Okumak Icin 1 Cikmak Icin 2 Giriniz" << endl;
            cin >> Sc;
         }
           return 0;
}
          void DosyayaYaz()
{

           ofstream yourfile("bilgi.txt", ios::app);
           int sayi;
           char Cnt = 'X';
           while (Cnt != 'Z')
         {
            cout << "Bir Sayi Giriniz:  ";
            cin >> sayi;
            yourfile << sayi << endl;
            cout << "Devam Etmek Icin Z den Farkli Bir Tusa Basin Cikmak Icin Z Giriniz" << endl;
            cin >> Cnt;
         }
           yourfile.close();
}
          void DosyadanOku()
{
           ifstream fileread;
           fileread.open("bilgi.txt", ios::in);
           string okunan;

           while (!fileread.eof())
         {
            getline(fileread, okunan);
            cout << okunan << "\n";
         }
           fileread.close();
}



