#include <iostream>
using namespace std;
#include "asunto.h"
#include "kerrostalo.h"

int main(){
    Kerrostalo * talo = new Kerrostalo;
    cout<<"Kerrostalon kulutus, = "<<talo->laskeKulutus(1)<<endl;

    return 0;
}