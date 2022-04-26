#include "repository.h"
Repo::Repo()
{
}
Repo::~Repo()
{}
void Repo::addItem(NumarComplex &n)
{
    elements.reserve(100);
    elements.push_back(n);
}
NumarComplex Repo::getItemFromPos(int pos)
{
}
int Repo::size()
{return elements.size();
}
void Repo::showAll() {
    for(int i=0;i<size();i++) {
        cout << elements[i].getParteReala() << " " << elements[i].getParteImaginara();
        cout<<endl;
    }
}

void Repo::MaximComplex(Repo &rez) {
    int max = 0;
    for(int i=0;i<size();i++)
        if(elements[i].modul(elements[i]) > max)
            max = elements[i].modul(elements[i]);
    for(int i=0;i<size();i++)
        if(elements[i].modul(elements[i]) == max)
            rez.addItem(elements[i]);
}

void Repo::Cadran1(Repo &rez) {
    for(int i=0;i<size();i++)
    {
        if((elements[i].getParteReala()>0) and (elements[i].getParteImaginara()>0))
            rez.addItem(elements[i]);
    }

}

void Repo::SecventaMax(Repo &secv) {
    int i, lmax, pmax, pc, lc;
    lmax = 0;
    lc = 1;
    pc = 0;
    for (i = 1; i < size(); i++) {
        if ((elements[i].getParteReala() == elements[i-1].getParteReala()) and (elements[i].getParteImaginara() == elements[i-1].getParteImaginara())) {
            lc++;
        } else {
            lc = 1;
            pc = i;
        }
        if (lmax < lc) {
            lmax = lc;
            pmax = pc;
        }
    }
    for (i = pmax; i <= pmax + lmax - 1; i++) {
        secv.addItem(elements[i]);
    }
}