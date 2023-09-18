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
    double laskeKulutus(double hinta){
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
    double laskeKulutus(double hinta){

    }
    Kerros(){
        cout << "Kerros luotu" << endl;
    }
};

class Katutaso : public Kerros, virtual public Asunto{
public:
    Asunto as1;
    Asunto as2;

    using Asunto::maarita;
    
    void maaritaAsunnot(){
        maarita(2, 100);
    }
    double laskeKulutus(double hinta){

    }
    Katutaso(){
        cout << "Katutaso luotu" << endl;
    }
};

class Kerrostalo : public Kerros, public Katutaso{
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
public:
    double laskeKulutus(double hinta){
        
    }
};

int main(){
    Katutaso KT;
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    KT.maaritaAsunnot();
    KT.maaritaAsunnot();
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    KT.maaritaAsunnot();
    KT.maaritaAsunnot();
    KT.maaritaAsunnot();
    KT.maaritaAsunnot();
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1, on 1200" << endl;
    return 0;
}