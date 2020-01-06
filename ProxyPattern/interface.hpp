#include <iostream>

using namespace std; 

class Subject {
public:
    virtual void Request() = 0;
    virtual ~Subject() { }
};
