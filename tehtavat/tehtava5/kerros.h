#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
using namespace std;

class Kerros{
public:
    Kerros();
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double);
    Asunto * ptrAs1 = new Asunto;
    Asunto * ptrAs2 = new Asunto;
    Asunto * ptrAs3 = new Asunto;
    Asunto * ptrAs4 = new Asunto;
};

#endif // KERROS_H