
#include <iostream>

class State
{
public:
  virtual ~State() {}
  virtual void handleRequest() = 0;
};


class ConcreteStateA : public State
{
public:
  ~ConcreteStateA() {  }
  
  void handleRequest()
  {
    std::cout << "State A Requested." << std::endl;
  }
  
};

class ConcreteStateB : public State
{
public:
  ~ConcreteStateB() { }
  
  void handleRequest()
  {
    std::cout << "State B Requested." << std::endl;
  }
  
};


class Context
{
public:
  Context() : state() {}
  
  ~Context()
  {
    delete state;
  }
  
  void setState( State* const s )
  {
    if ( state )
    {
      delete state;
    }
    state = s;
  }
  
  void request()
  {
    state->handleRequest();
  }
  

private:
  State *state;

};


int main()
{
  Context *context = new Context();
  
  context->setState( new ConcreteStateA() );
  context->request();
  
  context->setState( new ConcreteStateB() );
  context->request();
  
  delete context;
  return 0;
}