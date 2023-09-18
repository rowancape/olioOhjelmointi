#include <iostream>

using std::cout;
using std::endl;

class Asunto{
public:
    int asukasMaara;
    int neliot;

    void maarita(int a, int b){
        asukasMaara = a;
        neliot = b;
        cout << "Asunto maaritetty. Asukkaita: " << asukasMaara << ". Nelioita: " << neliot << endl;
    }
    virtual double laskeKulutus(double hinta){
        double kulutus = asukasMaara * neliot * hinta;
        return kulutus;
    }
    Asunto(){
        cout << "Asunto luotu" << endl;
    }
};

class Kerros : virtual public Asunto{
public:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;

    virtual void maaritaAsunnot(){
        maarita(2, 100);
    }
    virtual double laskeKulutus(double hinta){

    }
    Kerros(){
        cout << "Kerros luotu" << endl;
    }
};

class Katutaso : virtual public Kerros, virtual public Asunto{
public:
    Asunto as1;
    Asunto as2;

    using Asunto::maarita;
    
    void maaritaAsunnot(){
        maarita(2, 100);
    }
    virtual double laskeKulutus(double hinta){

    }
    Katutaso(){
        cout << "Katutaso luotu" << endl;
    }
};

class Kerrostalo : virtual public Kerros, public Katutaso{
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
public:
    double laskeKulutus(double hinta){
        
    }
};

int main(){
    Asunto * asunto = new Kerrostalo;
    asunto->laskeKulutus(1);
    return 0;
}