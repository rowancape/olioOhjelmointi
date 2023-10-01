#include "katutaso.h"

Katutaso::Katutaso(){
     cout<<"Katutaso luotu"<<endl;
}

void Katutaso::maaritaAsunnot(){
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    ptrAs1->maarita(2,100);
    ptrAs2->maarita(2,100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    this->Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta){  
    return ptrAs1->laskeKulutus(hinta)+ptrAs2->laskeKulutus(hinta)+Kerros::laskeKulutus(hinta);
}