#include <iostream>

class Chef{
protected:
    std::string name;
public:
    Chef(std::string x){
        name = x;
        std::cout << "Chef " << name << " constructor" << std::endl;
    }
    ~Chef(){
        std::cout << "Chef " << name << " destructor" << std::endl;
    }
    void makeSalad(){
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }
    void makeSoup(){
        std::cout << "Chef " << name << " makes soup" << std::endl;
    }
};

class ItalianChef : public Chef{
private:
    int flour;
    int water;
public:
    ItalianChef(std::string x, int y, int z) : Chef(x){
        flour = y;
        water = z;
    }
    void makePasta(){
        std::cout << "Chef " << name << " makes pasta using a special recipe" << std::endl;
        std::cout << "Chef " << name << " uses " << flour << " grams of flour" << std::endl;
        std::cout << "Chef " << name << " uses " << water << " grams of water" << std::endl;
    }
};

int main(){
    Chef chef1 = Chef("Raimo");
    chef1.makeSalad();
    chef1.makeSoup();
    ItalianChef chef2 = ItalianChef("Mario", 155, 100);
    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();
    

    return 0;
}