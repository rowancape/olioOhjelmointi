#include "asunto.h"

Asunto::Asunto(){
    cout<<"asunto luotu"<<endl;
}

void Asunto::maarita(int a, int n){
    asukasMaara = a;
    neliot = n;
    cout<<"Asunto maaritetty asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}

double Asunto::laskeKulutus(double hinta){
    return asukasMaara*neliot*hinta;
}