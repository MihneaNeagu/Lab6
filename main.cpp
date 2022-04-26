#include <iostream>
#include "tests.h"
#include "numar_complex.h"
#include "repository.h"
using namespace std;
int main() {
    Repo r;
    while(true)
    {
        NumarComplex z;

        tests();
        cout<<"1. Dati un numar complex: "<<'\n';
        cout<<"2. Afisati numarul complex: "<<'\n';
        cout<<"3. Afisati modulul numarului complex: "<<'\n';
        cout<<"4. Afisati conjugatul numarului complex:"<<'\n';
        cout<<"5. Afisati suma numarului complex cu un numar dat:"<<'\n';
        cout<<"6. Afisati diferenta dintre numarul complex si un numar dat:"<<'\n';
        cout<<"7. Afisati produsul numarului complex cu un numar dat:"<<'\n';
        cout<<"8. Afisati impartirea dintre numarul complex si un numar dat:"<<'\n';
        cout<<"9. Afisati toate entitatile din cadranul 1:"<<'\n';
        cout<<"10. Afisati cea mai mare entitate(modulul maxim):"<<'\n';
        cout<<"11. Afisati cea mai mare secventa de entitati egale:"<<'\n';
        cout<<"12. Exit"<<'\n';
        int optiune;
        cout<<"Dati optiunea:";
        cout<<endl;
        cin>>optiune;
        if (optiune==1)
        {
            cin>>z;
            r.addItem(z);
        }
        else if (optiune==2)
        {
            r.showAll();
        }
        /*else if (optiune==3) {
            for(int i=0;i<n;i++)
                cout<<v[i].modul(v[i])<<' ';
            cout << endl;
        }
        else if (optiune==4) {
            for(int i=0;i<n;i++)
            {
                v[i].conjugat(v[i]);
                cout<<v[i]<<" "<<" ";
            }
            cout<<endl;
        }
        else if (optiune==5){
            for(int i=0;i<n;i++)
            { v[i+1].sumaNumereComplexe(v[i],v[i+1]);
                cout<<v[i+1]<<" ";
            }
            cout<<endl;
        }
        else if (optiune==6)
        {for(int i=0;i<n;i++)
            { v[i+1].diferentaNumereComplexe(v[i],v[i+1]);
                cout<<v[i+1]<<" ";
            }
            cout<<endl;
        }
        else if (optiune==7)
        {
            for(int i=0;i<n;i++)
            { v[i+1].produsNumereComplexe(v[i],v[i+1]);
                cout<<v[i+1]<<" ";
            }
            cout<<endl;
        }
        else if (optiune==8)
        {
            for(int i=0;i<n;i++)
            { v[i+1].impartireNumereComplexe(v[i],v[i+1]);
                cout<<v[i+1]<<" ";
            }
            cout<<endl;
        }*/
        else if(optiune==9)
        {
            Repo rez;
            r.Cadran1(rez);
            rez.showAll();
        }
        else if(optiune==10){
            Repo rez;
            r.MaximComplex(rez);
            rez.showAll();
        }
        else if(optiune==11) {
            Repo rez;
            r.SecventaMax(rez);
            rez.showAll();
        }
        else if (optiune==12)
            {
                break;
            }
    }
    return 0;
}
