#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int brojArtikla = 0;
    int izbor;
    int MAX = 50;
    string artikli[MAX];
    unsigned long long int barkod[MAX];
<<<<<<< HEAD
=======
    unsigned long long int barkod_pretraga;
    string naziv;
>>>>>>> origin/master
    float cijena[MAX];
    ofstream datotekaUpisivanje;
    ifstream datotekaUcitavanje;
    datotekaUcitavanje.open("artikli.txt");
    while(1)
    {
        datotekaUcitavanje >> barkod[brojArtikla];
        if(datotekaUcitavanje.eof() == true)
        {
            break;
            datotekaUcitavanje.ignore();
            getline(datotekaUcitavanje, artikli[brojArtikla]);
            datotekaUcitavanje >> cijena[brojArtikla];
            brojArtikla++;
        }
    }
datotekaUcitavanje.close();
    while(1)
    {
        cout << "Glavni izbornik" << endl;
        cout << "1. Unos novog artikla" << endl;
        cout << "2. Ispisi sve podatke" << endl;
        cout << "3. Pretraga prema bar kodu artikla" << endl;
        cout << "4. Pretraga prema nazivu artikla" << endl;
        cout << "5. Izmjena podataka prema bar kodu" << endl;
        cout << "6. Ispisi sortirano prema nazivu artikla" << endl;
        cout << "7. Izlaz iz programa" << endl;
        cout << "Upisite broj iz izbornika: ";
        cin >> izbor;
        if( izbor == 1 )
        {
<<<<<<< HEAD
            cout<< "unesite bar kod artikla: ";
            cin >> barkod[brojArtikla];
            cout << "Unesite naziv artikla: ";
            cin.ignore();
            getline(cin, artikli[brojArtikla]);
            cout << "Unesite cijenu artikla: ";
            cin >> cijena[brojArtikla];
            datotekaUpisivanje.open("artikli.txt", ios::app);
            datotekaUpisivanje << barkod[brojArtikla]<<endl;
            datotekaUpisivanje << artikli[brojArtikla] << endl;
            datotekaUpisivanje << cijena[brojArtikla] << endl;
=======
            cout<<"unesite bar kod artikla";
            cin>> barkod [brojArtikla];
            cout << "Unesite naziv artikla: ";
            cin.ignore();
            getline(cin, artikli[brojArtikla]);
            cout << "unesite cjenu artikla";
            cin >> cijena[brojArtikla];


            datotekaUpisivanje.open("artikli.txt", ios::app);
            datotekaUpisivanje <<barkod [brojArtikla] << endl;
            datotekaUpisivanje <<artikli[brojArtikla] << endl;
            datotekaUpisivanje << cijena[brojArtikla] << endl;
            datotekaUpisivanje.close();
>>>>>>> origin/master

            brojArtikla++;
        }
        else if( izbor == 2 )
        {
            cout << "bar kod" << "\t" << "naziv artikla" << "\t" << "cijena" << endl;
            for( int i = 0; i < brojArtikla; i++ )
            {
<<<<<<< HEAD
                cout << barkod[i]<<"\t"<< artikli[i]<<"\t" << cijena[i]<< endl;
=======
                cout << artikli[i] << "\t";
                cout << barkod[i] << "\t";
                cout << cijena[i] << "\t";
>>>>>>> origin/master
            }

        }
        else if( izbor == 3 )
        {
<<<<<<< HEAD
            unsigned long long int barkod_pretraga;
            cout<<"Upisite bar kod po kojem zelite naci artikl ";
            cin>> barkod_pretraga;
            bool pronadjen=false;
            for(int i=0; i<brojArtikla;i++)
            {
                if(barkod_pretraga==barkod[i])
                {
                    cout << barkod[i]<<"\t"<< artikli[i]<<"\t" << cijena[i]<< endl;
                    pronadjen = true;
                    break;
                }
            }
            if(pronadjen==false)
            {
                cout<<"Artikl nije pronaðen" << endl;
=======
            cout << "upisite barkod";
            cin >> barkod_pretraga;
            bool pronadjen = false;
            for( int i=0; i < brojArtikla; i++)
            {
                if(barkod_pretraga == barkod[i])
                {
                    cout << artikli[i] << "\t";
                cout << barkod[i] << "\t";
                cout << cijena[i] << "\t";
                    pronadjen =true;
                break;
                }
                if(pronadjen == false)
                {
                    cout << "unjeli ste krivi barkod";
                }
>>>>>>> origin/master
            }
        }
        else if( izbor == 4 )
        {
<<<<<<< HEAD
            string  artikl_pretraga;
            cout << "upisite artikl po kojem zelite saznati podatke: ";
            cin.ignore();
            getline(cin, artikl_pretraga);
            bool pronadjen=false;
            for (int i=0 ; i<brojArtikla; i++)
            {
                if(artikl_pretraga == artikli[i])
                {
                    pronadjen=true;
                    cout << barkod[i]<<"\t"<< artikli[i]<<"\t" << cijena[i]<< endl;
                    break;
                }
            }
            if(pronadjen==false)
            {
                cout<<"artikl nije pronaðen"<<endl;
            }
            }
        else if( izbor == 5 )
        {
           unsigned long long int barkod_pretraga;
            cout<<"Upisite bar kod po kojem zelite naci artikl ";
            cin>> barkod_pretraga;
            bool pronadjen=false;
            for(int i=0; i<brojArtikla;i++)
            {
                if(barkod_pretraga==barkod[i])
                    cout<<"Unesite novu cijenu: "<<endl;
                cin>> cijena [i];
                break;
=======
           cout << "upisite naziv";
           cin.ignore();
            getline(cin, naziv);
            bool pronadjen = false;
            for( int i=0; i < brojArtikla; i++)
            {
                if(naziv == artikli[i])
                {
                    cout << artikli[i] << "\t";
                cout << barkod[i] << "\t";
                cout << cijena[i] << "\t";
                    pronadjen =true;
                break;
                }
                if(pronadjen == false)
                {
                    cout << "nema artikla";
                }
            }
        }
        else if( izbor == 5 )
        {
        cout << "upisite barkod";
            cin >> barkod_pretraga;
            bool pronadjen = false;
            for( int i=0; i < brojArtikla; i++)
            {
                if(barkod_pretraga == barkod[i])
                {
                    cout << "unesite novu cjenu";
                    cin >> cijena[i];

                break;
                }

>>>>>>> origin/master
            }
        }
        else if( izbor == 6 )
        {
        }
        else if( izbor == 7 )
        {
            cout << "Kraj rada" << endl;
            break;
        }
        else
        {
            cout << "Unijeli ste krivi broj." << endl;
        }
        cout << endl;
    }
}
