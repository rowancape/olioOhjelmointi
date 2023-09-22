#include "classes.h"

int main(){
    Kerrostalo kerrostalo;
    kerrostalo.maarita();
    cout << "Kerrostalon kulutus: " << kerrostalo.laskeKulutus(1) << endl;
}