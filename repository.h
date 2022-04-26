#ifndef REPO_H
#define REPO_H
#include "numar_complex.h"
#include <vector>
using namespace std;
class Repo{
private:
    vector<NumarComplex> elements;
public:
    Repo();
    ~Repo();
    void addItem(NumarComplex &n);
    NumarComplex getItemFromPos(int pos);
    int size();
    void showAll();
    void MaximComplex(Repo &rez);
    void Cadran1(Repo &rez);
    void SecventaMax(Repo &secv);

};
#endif // REPO_H