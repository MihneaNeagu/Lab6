#include "numar_complex.h"
using namespace std;
//Constructor fara parametrii
//Date de intrare: nimic
//Date de iesire: un obiect gol de tip NumarComplex
NumarComplex::NumarComplex()
{this->parte_reala=0;
    this->parte_imaginara=0;
}
//Constructor in care dam parametrii
//Date de intrare: partea reala a unui numar complex (de tip float) si partea imaginara(de tip float)
//Date de iesire: un obiect de tip NumarComplex care va contine datele mentionate anterior (la date de intrare)
NumarComplex::NumarComplex (float a, float b)
{this->parte_reala=a;
    this->parte_imaginara=b;
}
//Copierea unui  constructor
//Date de intrare: un obiect n de tip NumarComplex
//Date de iesire: un alt obiect de tip NumarComplex care contine aceleasi informatii ca si obiectul n (din datele de intrare)
NumarComplex::NumarComplex(const NumarComplex &n)
{this->parte_reala=n.parte_reala;
    this->parte_imaginara=n.parte_imaginara;
}
//Destructor
//Date de intrare: un obiect de tip NumarComplex
//Date de iesire: nimic
NumarComplex::~NumarComplex(){
    //cout<<"destructor NumarComplex for "<<this->partereala<<",dar si"<<this->parteimaginara<<endl;
}
//Getter pt parte reala
//Date de intrare: un obiect de tip NumarComplex
//Date de iesire: partea reala a numarului complex
float NumarComplex::getParteReala()
{return this->parte_reala;

}
//Getter pt parte imaginara
//Date de intrare: un obiect de tip NumarComplex
//Date de iesire: partea imaginara a numarului complex
float NumarComplex::getParteImaginara()
{return this->parte_imaginara;
}
//Setter pt parte reala
//Date de intrare: un obiect de tip NumarComplex si un numar de tip float ce reprezinta partea reala
//Date de iesire: acelasi obiect cu o noua valoare pentru partea reala
void NumarComplex::setParteReala(float a)
{this->parte_reala=a;
}
//Setter pt parte imaginara
//Date de intrare: un obiect de tip NumarComplex si un numar de tip float ce reprezinta partea imaginara
//Date de iesire: acelasi obiect cu o noua valoare pentru partea imaginara
void NumarComplex::setParteImaginara(float a)
{this->parte_imaginara=a;
}
//Definitia operatorului de egalitate
//Date de intrare: Doua obiecte de tip NumarComplex (cel curent, this, si n)
//Date de iesire: the new state of the current object (this)
NumarComplex& NumarComplex::operator=(const NumarComplex &n){
    this->setParteReala(n.parte_reala);
    this->setParteImaginara(n.parte_imaginara);
    return *this;
}
//Definitia comparatorului
//Date de intrare: doua obiecte de tip NumarComplex (this si n)
//Date de iesire: true sau false
bool NumarComplex::operator==(const NumarComplex &n){
    return ((this->parte_reala== n.parte_reala) && (this->parte_imaginara == n.parte_imaginara));
}

void NumarComplex::sumaNumereComplexe(NumarComplex z, NumarComplex &r)
{
    r.parte_reala=r.parte_reala+z.parte_reala;
    r.parte_imaginara=r.parte_imaginara+z.parte_imaginara;
}

void NumarComplex::diferentaNumereComplexe(NumarComplex z, NumarComplex &r)
{
    r.parte_reala=z.parte_reala-r.parte_reala;
    r.parte_imaginara=z.parte_imaginara-r.parte_imaginara;
}

float NumarComplex::modul(NumarComplex z)
{
    return z.parte_reala*z.parte_reala+z.parte_imaginara*z.parte_imaginara;
}

void NumarComplex::produsNumereComplexe(NumarComplex z, NumarComplex &r)
{
    float k=r.parte_reala;//luam k partea reala a celui de-al doilea numar pentru ca isi schimba valoarea dupa prima operatie
    r.parte_reala=(z.parte_reala*r.parte_reala)-(z.parte_imaginara*r.parte_imaginara);
    r.parte_imaginara=(z.parte_reala*r.parte_imaginara)+(z.parte_imaginara*k);
}

void NumarComplex::conjugat(NumarComplex &z) {
    z.parte_imaginara = -z.parte_imaginara;
}

void NumarComplex::impartireNumereComplexe(NumarComplex z, NumarComplex &r)
{
    float k=r.parte_reala;//luam k partea reala a celui de-al doilea numar pentru ca isi schimba valoarea dupa prima operatie
    float impartitor=(z.parte_imaginara*z.parte_imaginara+r.parte_imaginara*r.parte_imaginara);
    r.parte_reala=((z.parte_reala*r.parte_reala)+(z.parte_imaginara*r.parte_imaginara))/impartitor;
    r.parte_imaginara=((k*z.parte_imaginara)-(r.parte_imaginara*z.parte_reala))/impartitor;
}

int NumarComplex::cadran1(NumarComplex z)
{
    if(z.getParteReala()>0&&z.getParteImaginara()>0)
        return 1;
}

ostream& operator<<(ostream& os, NumarComplex& z){
    os<<z.getParteReala()<<" "<<z.getParteImaginara();
    return os;
}

istream& operator>>(istream& is, NumarComplex& z){
    cout<<"Introduceti datele a(real),b(imaginar): "<<endl;
    int a,b;
    cout<<"Introduceti partea reala: ";
    cin>>a;
    cout<<"Introduceti partea imaginara: ";
    cin>>b;
    z.setParteReala(a);
    z.setParteImaginara(b);
    return is;
}