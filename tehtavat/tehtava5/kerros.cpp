#include "kerros.h"

Kerros::Kerros(){
    cout<<"Kerros luotu"<<endl;
}

void Kerros::maaritaAsunnot(){
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    ptrAs1->maarita(2,100);
    ptrAs2->maarita(2,100);
    ptrAs3->maarita(2,100);
    ptrAs4->maarita(2,100);
}

double Kerros::laskeKulutus(double hinta){
    return ptrAs1->laskeKulutus(hinta)+ptrAs2->laskeKulutus(hinta)
         + ptrAs3->laskeKulutus(hinta)+ptrAs4->laskeKulutus(hinta);
}