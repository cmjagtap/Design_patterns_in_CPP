#include <iostream>
using namespace std;

class AbstractClass {
public:
    virtual void TemplateMethod() {
        TyreBuilding();
        EngineBuilding();
    }

    virtual ~AbstractClass() { }
protected:
    virtual void TyreBuilding() = 0;
    virtual void EngineBuilding() = 0;
    AbstractClass() { }
};

class CarCompany :public AbstractClass {
public:
    void TyreBuilding() {
        cout << "Car company bulding car tyres" << endl;
    }

    void EngineBuilding() {
        cout << "Car company bulding car engine" << endl;
    }
};

class BusCompany :public AbstractClass {
public:
    void TyreBuilding() {
        cout << "Bus company building tyres" << endl;
    }

    void EngineBuilding() {
        cout << "Bus company buidling engine" << endl;
    }
};



int main() {
    AbstractClass *p1 = new CarCompany();
    AbstractClass *p2 = new BusCompany();
    p1->TemplateMethod();
    p2->TemplateMethod();

    delete p1;
    delete p2;

    return 0;
}