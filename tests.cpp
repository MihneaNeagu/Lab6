#include "tests.h"
#include <cassert>
#include "numar_complex.h"
void testConstructor()
{NumarComplex n1(1,2);
    assert(n1.getParteReala()==1);
    assert(n1.getParteImaginara()==2);
}
void testSetGet(){
    NumarComplex n;
    NumarComplex m;
///test getteri
    n.setParteReala(1);
    n.setParteImaginara(2);
    assert ((n.getParteReala() == 1)  && (n.getParteImaginara() == 2));
///test suma
    n.setParteReala(1);
    n.setParteImaginara(2);
    m.setParteReala(2);
    m.setParteImaginara(3);
    n.sumaNumereComplexe(n, m);
    assert((m.getParteReala()==3)&&(m.getParteImaginara()==5));//(1+2)+(2+3)*i
///test diferenta
    m.setParteReala(2);
    m.setParteImaginara(3);
    n.diferentaNumereComplexe(n,m);
    assert((m.getParteReala()==-1)&&(m.getParteImaginara()==-1));//(1-2)+(2-3)*i
///test produs
    n.setParteReala(1);
    n.setParteImaginara(2);
    m.setParteReala(2);
    m.setParteImaginara(3);
    n.produsNumereComplexe(n,m);
    assert((m.getParteReala()==-4)&&(m.getParteImaginara()==7));//(1*2-2*3)+(1*3+2*2)*i
///test modul
    m.setParteReala(3);
    m.setParteImaginara(4);
    //assert(m.modul(m)==5);//sqrt(3*3+4*4)=5
///test conjugat
    n.setParteReala(1);
    n.setParteImaginara(2);
    n.conjugat(n);
    assert((n.getParteReala()==1)&&(n.getParteImaginara()==-2));
///test impartire
    n.setParteReala(1);
    n.setParteImaginara(3);
    m.setParteReala(2);
    m.setParteImaginara(4);
    n.impartireNumereComplexe(n,m);
    float x=14.0/25;//valorile de test sunt calculate inainte pentru acuratetea rezultatului
    float y=2.0/25;
    assert((m.getParteReala()==x)&&(m.getParteImaginara()==y));//(1*2+3*4)/25+(2*3-1*4)/25*i
}

void tests()
{testConstructor();
    testSetGet();
}
