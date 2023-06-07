#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik, plik1, plik2;
    string liczba, podzielne, liczba1, liczba2;
    int maxi =0, mini =260, jaka1, jaka2;
    string tab [1000];
    int ile =0, ile2=0, podzielneprzez2 =0, podzielneprzez8=0;
    plik.open("liczby.txt");
    for(int x =0; x<1000; x++)
    {
        ile =0;
        plik>>liczba;

        for(int i =0; i<liczba.length(); i++)
        {
            if(liczba[i]=='0')
            {
                ile++;
            }
        }
        // cout << liczba << " "<< ile<<" "<<liczba.length()-ile<<endl;
        if(ile>liczba.length()-ile)
        {
            ile2++;
        }
    }
    cout<<"4.1 " << ile2<< endl;
    plik1.open("liczby.txt");
    for(int y =0; y<1000; y++)
    {
        plik1>>podzielne;
        if(podzielne[podzielne.length()-1]=='0')
        {
            podzielneprzez2++;
        }
        if(podzielne[podzielne.length()-1]=='0'&&
                podzielne[podzielne.length()-2]=='0'&&
                podzielne[podzielne.length()-3]=='0')
        {
            podzielneprzez8++;
        }
    }
    cout <<"4.2 "<< podzielneprzez2<<" "<<podzielneprzez8<<endl;
    plik2.open("liczby.txt");
   for(int h =0; h<1000; h++)
   {
       plik2>>tab[h];
   }

    for(int u =0; u<1000; u++)
    {
        if(tab[u].length()>maxi)
        {
            maxi = tab[u].length();
            jaka1 = u;
            liczba1 = tab[u];
        }
        else if (tab[u].length()==maxi)
        {
            if(liczba1<tab[u])
            {
                maxi = tab[u].length();
                jaka1 = u;
                liczba1 = tab[u];
            }
        }

    }
     for(int u =0; u<1000; u++)
    {
        if(tab[u].length()<mini)
        {
            mini = tab[u].length();
            jaka2 = u;
            liczba2 = tab[u];
        }
        else if (tab[u].length()==mini)
        {
            if(liczba2>tab[u])
            {
                mini = tab[u].length();
                jaka2 = u;
                liczba2 = tab[u];
            }
        }

    }
cout << "4.3 "<< jaka2+1<<" "<< jaka1+1<<endl;
}
