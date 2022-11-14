/*





*/


#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class tablica{

private:
    int N;//dlugosc tablicy (liczba komorek)
    int *tab;//tablica
    int il_el;//biezaca liczba elementow
public:
    //void tworz_tab(int N);//jak hest konstruktor to ta metoda niepotrzebna
    tablica(int N_in);//konstruktor (tworzy tablice i inicjuje N oraz il_el)
    void dodaj(int el);
    void usun_ostatni();
    void zeruj_tab();
    void drukuj_tab();
    int get_il_el(){return il_el;};//ile elementow?
};

tablica::tablica(int N_in)
{
    N = N_in;//przypisanie dlugosci tablicy do pola N
    tab=new int[N];
    for(int i=0;i<N;i++)
        tab[i]=0;
    il_el=0;//liczba elementow == 0
}

//void tablica::tworz_tab(int N_in)
//{
//    N = N_in;//przypisanie dlugosci tablicy do pola N
//    tab=new int[N];
//    for(int i=0;i<N;i++)
//        tab[i]=0;
//    il_el=0;//liczba elementow == 0
//}

void tablica::zeruj_tab()
{
    for(int i=0;i<N;i++)
        tab[i]=0;
}

void tablica::drukuj_tab()
{
    for(int i=0;i<N;i++)
        cout << i << " : " << tab[i] << endl;
        cout << "*--------------------*" << endl;

}


void tablica::dodaj(int el)
{
    if(il_el<N-1)
    {
        tab[il_el]=el;
        il_el++;
    }
}

void tablica::usun_ostatni()
{
    if(il_el>0)
    {
        tab[il_el-1]=0;
        il_el--;
    }
}

int main()
{
    tablica t1(10);
    //t1.tworz_tab(10);//jak jest konstruktor, to ta metoda niepotrzebna
    t1.drukuj_tab();
    t1.dodaj(22);
    t1.dodaj(33);
    t1.dodaj(44);
    t1.dodaj(55);
    t1.drukuj_tab();
    t1.usun_ostatni();
    t1.usun_ostatni();
    t1.usun_ostatni();
    t1.usun_ostatni();
    t1.drukuj_tab();
    cout << "Ile lementow? " << t1.get_il_el() << endl;
    t1.usun_ostatni();//kolejne usuniecie ju znic nie usuwa, nie ma elementow
    cout << "Ile lementow? " << t1.get_il_el() << endl;
}
