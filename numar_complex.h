#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class NumarComplex{
private:float parte_reala;
    float parte_imaginara;
public:
    NumarComplex();
    NumarComplex(float a, float b);
    NumarComplex(const NumarComplex &n);
    ~NumarComplex();
    float getParteReala();
    float getParteImaginara();
    void setParteReala(float a);
    void setParteImaginara(float b);
    NumarComplex& operator=(const NumarComplex &n);
    bool operator==(const NumarComplex &n);
    void sumaNumereComplexe(NumarComplex z, NumarComplex &r);
    void diferentaNumereComplexe(NumarComplex z, NumarComplex &r);
    float modul(NumarComplex z);
    void produsNumereComplexe(NumarComplex z, NumarComplex &r);
    void conjugat(NumarComplex &z);
    void impartireNumereComplexe(NumarComplex z, NumarComplex &r);
    friend ostream& operator<<(ostream&, NumarComplex&);
    friend istream& operator>>(istream&, NumarComplex&);
    int cadran1(NumarComplex z);
};
