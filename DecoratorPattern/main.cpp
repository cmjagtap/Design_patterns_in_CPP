#include <iostream>
using namespace std;
#define ICE_PRICE 5
#define NUTS_PRICE 10
class Component 
{
public:
    virtual void Operation() = 0;
    virtual int getCost() = 0;
    virtual ~Component() { }
};

class ConcreteComponent :public Component 
{
public:
    int getCost()
    {
      return ICE_PRICE;
    }
    void Operation() 
    {
        cout << "eating Plane ice creame " << endl;
        cout << "Plane Ice cream price " << getCost() << endl;
    }

};

class Decorator 
{
public:
    virtual void Operation() = 0;
    virtual void AddBehavior() = 0;
    virtual int getCost() = 0;
    virtual ~Decorator() { }
};

class ConcreteDecorator :public Decorator
{
private:
  Component *_com;
public:
    ConcreteDecorator(Component *com) 
    {
        _com = com;
    }
    int getCost()
    {
      return NUTS_PRICE + _com->getCost();
    }

    void AddBehavior()
    {
        cout << "Eating Nuts" << endl;
        cout << "ICE creame with nuts price  "<< getCost()<<endl;
    }
    
    void Operation() 
    {
      _com->Operation();
       AddBehavior();
    }

};

int main() 
{
    Component *con = new ConcreteComponent();
    Decorator *dec = new ConcreteDecorator(con);
    dec->Operation();

    delete con;
    delete dec;

    return 0;
}
