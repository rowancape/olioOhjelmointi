#ifndef KATUTASO_H
#define KATUTASO_H

#include <iostream>
using namespace std;

#include "kerros.h"

class Katutaso : public Kerros{
public:
    Katutaso();
    Asunto * ptrAs1 = new Asunto;
    Asunto * ptrAs2 = new Asunto;
    virtual void maaritaAsunnot(void) override;
    double laskeKulutus(double);
};

#endif // KATUTASO_H