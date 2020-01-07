#include <iostream>
using namespace std;

class RecieverLight {
public:
    void TurnLightOn() {
        cout << "Turning Light on" << endl;
    }
    void TurnLightOff()
    {
        cout << "Turning Light off" << endl;
    }
};

class Command {
public:
    virtual ~Command() { }
    virtual void Excute() = 0;
};

class TurnOnCommand :public Command {
public:
    TurnOnCommand(RecieverLight *rev) {
        _rev = rev;
    }

    void Excute() {
        _rev->TurnLightOn();
    }
private:
    RecieverLight *_rev;
};

class TurnOffCommand :public Command {
public:
    TurnOffCommand(RecieverLight *rev) {
        _rev = rev;
    }

    void Excute() {
        _rev->TurnLightOff();
    }
private:
    RecieverLight *_rev;
};

class Invoker 
{
public:
    void setCommand(Command* cmd) 
    {
        _cmd = cmd;
    }
    void Invoke() {
        _cmd->Excute();
    }

private:
    Command *_cmd;
};

int main() {
    RecieverLight *rev = new RecieverLight();
    Command *lightOn = new TurnOnCommand(rev);
    Command *lightOff = new TurnOffCommand(rev);
    Invoker *inv = new Invoker();
    inv->setCommand(lightOn);
    inv->Invoke();
    inv->setCommand(lightOff);
    inv->Invoke();

    delete rev;
    delete lightOn;
    delete inv;
    delete lightOff;

    return 0;
}