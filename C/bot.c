#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void sprzeciw();
void odliczanie();

int main()
{
for (;;)
{
    char wybor;
    cout<<"***************"<<endl;
    cout<<"Menu:" << endl;
    cout<<"1.Start"<<endl;
    cout<<"2.Wyjscie"<<endl;
    cout<<"**************"<<endl;
    wybor=getch();
    switch(wybor)
    {
    case '1':
        {
        for(;;)
        {
        int liczba;
        cout<<"Ile klawiszy symulowac: ";
        cin>>liczba;
        char dane [liczba+1];
        for (int i=0; i!=liczba; i++)
        {
            system("cls");
            cout<<"Podaj "<<i+1<<" przycisk "<<endl;
            //cin>> dane[i];
            dane[i]=getch();
        }
        cout<<"Wybrales taka konfiguracje:"<<endl;
        for (int j=0; j!=liczba; j++)
        {
            cout<<j+1<<" przycisk: "<<dane[j]<<endl;
        }
        cout<<"Kliknij 'r' aby wpisac od nowa, lub inny dowolny klawisz by przejsc dalej"<<endl;
        char wkl;
        wkl=getch();
        if (wkl!='r')
        {
            cout<<"Co ile sekund przelaczac klawisze: ";
            int ile;
            cin>>ile;
            cout<<"Bot zacznie dzialac za:"<<endl;
            odliczanie();
        }
        }
        }
    case '2':
        {
            return 0;
        }
    default:
        {
         sprzeciw();
        }
    }
}
    return 0;
}
//////////////////////////////////////////////////////////////
void sprzeciw()
{
    cout<<"Wybierz poprawna opcje!"<<endl;
    Sleep(1000);
    system("cls");
}
void odliczanie()
{
    Sleep(1000);
    system("cls");
    for (int i=10; i>0;i--)
    {
        cout<<i;
        Sleep(1000);
        system("cls");
    }
}
                //ke**ybd_e*ventP**( VkKeyScanP***( dane*[k] ), 0*, 0, 0 );