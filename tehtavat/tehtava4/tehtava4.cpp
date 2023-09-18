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
        cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
        maarita(2, 100);
        maarita(2, 100);
        maarita(2, 100);
        maarita(2, 100);
    }
    virtual double laskeKulutus(double hinta){
        double kulutus = asukasMaara * neliot * hinta;
        return kulutus;
    }
    Kerros(){
        cout << "Kerros luotu" << endl;
    }
};

class Katutaso : virtual public Kerros, virtual public Asunto{
public:
    Asunto as1;
    Asunto as2;
    
    void maaritaAsunnot(){
        cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
        maarita(2, 100);
        maarita(2, 100);
    }
    virtual double laskeKulutus(double hinta){
        double kulutus = asukasMaara * neliot * hinta;
        return kulutus;
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
        double kulutus = asukasMaara * neliot * hinta;
        return kulutus;
    }
    Kerrostalo(){
        cout << "Kerrostalo luotu" << endl;
    }
};

int main(){
    Asunto * asunto = new Kerrostalo;
    asunto->maarita(2, 100);
    asunto->laskeKulutus(1);
    return 0;
}