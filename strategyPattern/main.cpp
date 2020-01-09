#include <iostream>
using namespace std;

class Strategy {
public:
    virtual void Action() = 0;
    virtual ~Strategy() { }
};

class ConcreteStrategyBus :public Strategy {
public:
    void Action() {
        cout << "Bus Vehicle" << endl;
    }
};

class ConcreteStrategyCar :public Strategy {
public:
    void Action() {
        cout << "car vehicle" << endl;
    }
};

class ContextTransportation {
public:
    void setStratedy(Strategy *stg) {
        _stg = stg;
    }

    void DoActionSelectVehicle() {
        _stg->Action();
    }

private:
    Strategy *_stg;
};

int main() {
    Strategy *bus = new ConcreteStrategyBus();
    Strategy *car = new ConcreteStrategyCar();
    ContextTransportation *context = new ContextTransportation();
    context->setStratedy(bus);
    context->DoActionSelectVehicle();
    context->setStratedy(car);
    context->DoActionSelectVehicle();
    delete bus;
    delete car;

    return 0;
}